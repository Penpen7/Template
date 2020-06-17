
ll continuousmod(ll n, ll b, ll r) {
  ll d = b;
  ll res = 0;
  while (n / d>0) {
    res += n / d;
    d *= r;
  }
  return res;
}
