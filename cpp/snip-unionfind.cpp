
struct UnionFind {
  vector<int> par; // par[i]:iの親の番号　(例) par[3] = 2 : 3の親が2
  vector<int> siz;

  UnionFind(int N)
      : par(N)
      , siz(N)
  { //最初は全てが根であるとして初期化
    for (int i = 0; i < N; i++) {
      par[i] = i;
      siz[i] = 1;
    }
  }

  int root(int x)
  { // データxが属する木の根を再帰で得る：root(x) = {xの木の根}
    if (par[x] == x)
      return x;
    return par[x] = root(par[x]);
  }

  void unite(int x, int y)
  {                   // xとyの木を併合
    int rx = root(x); //xの根をrx
    int ry = root(y); //yの根をry
    if (rx==ry) {
      return; //xとyの根が同じ(=同じ木にある)時はそのまま
    } else {
      if (size(rx) < size(ry))
        swap(rx, ry);
      par[ry] = rx;           //xとyの根が同じでない(=同じ木にない)時：xの根rxをyの根ryにつける
      siz[rx] += siz[ry]; // 大きさを付け換える
    }
  }

  bool same(int x, int y)
  { // 2つのデータx, yが属する木が同じならtrueを返す
    int rx = root(x);
    int ry = root(y);
    return rx == ry;
  }
  int size(int x)
  {
    return siz[root(x)];
  }
};
