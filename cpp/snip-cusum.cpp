// 累積和をとります。
// 累積和をとります。
// vector<T> aはサイズnのvector
// isreverse : 後ろからとっていくか
// 返り値b : 累積和をとった結果
// isreverse = false : b[i]=a[0]からa[i-1]までの和, b[0]=0 iはnまで
// isreverse = true  : b[i]=a[i]からa[n-1]までの和, b[n]=0 iはnまで
template <class T>
vector<T> cusum(vector<T> &a, bool isreverse = false, const T initial = 0) {
  // auto f = [](T a, T b) { return max(a, b); };
  // auto f = [](T a, T b) {return _gcd(a,b);}
  // auto f = [](T a, T b) {return _lcm(a,b);}
  // auto f = [](T a, T b) {return a^b;}
  auto f = [](T a, T b) { return a + b; };
  vector<T> b((long long int)a.size() + 1);

  auto g = [](auto bbegin, auto begin, auto end, auto initial, auto func) {
    *bbegin = initial;
    bbegin++;
    while (begin != end) {
      *bbegin = func(*(bbegin - 1), *begin);
      begin++;
      bbegin++;
    }
  };

  if (isreverse)
    g(b.rbegin(), a.rbegin(), a.rend(), initial, f);
  else
    g(b.begin(), a.begin(), a.end(), initial, f);

  return b;
}
