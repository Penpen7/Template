typedef pair<int,int> P;
const ll mod = 1000000000+7;
struct edge{ll to, cost;};

// ダイクストラ法 蟻本p.96-99
// 始点:s
// 距離:d(頂点数)
// 辺:G(辺の数) 無向グラフの場合は 頂点i->j j->iを追加しておく
// 経路:prev
// 計算量(辺の数)log(頂点数)
void dijkstra(int s,vector<ll> &d, vector<vector<edge>> &G,vector<ll> &prev){
  priority_queue<P, vector<P>,greater<P>> que;

  d=vector<ll>(SIZE(d),INF);
  prev = vector<ll>(SIZE(d), INF);
  d[s]=0;
  que.push(P(0,s));

  while(!que.empty()) {
    P p = que.top(); que.pop();
    int v = p.second;
    if(d[v]<p.first) continue;
    for(edge e:G[v]){
      if(d[e.to] > d[v] + e.cost){
        d[e.to] = d[v]+e.cost;
        que.push(P(d[e.to],e.to));
        prev[e.to] = v;
      }
    }
  }
}
int main(){
  // faster
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  // 部屋の数、m本の通路
  int n, m; cin >> n >> m;
  vector<ll> d(n);
  vector<vector<edge>> G(n, vector<edge>(0));
  vector<ll> prev;

  // 無向グラフ 
  rep(i,m){
    int a,b;  cin >> a >> b;
    edge e, j;
    e.cost = 1;
    e.to = b-1;
    j.cost = 1;
    j.to = a-1;
    G[a-1].push_back(e);
    G[b-1].push_back(j);
  }
  dijkstra(0, d, G, prev);
  return 0;
}
