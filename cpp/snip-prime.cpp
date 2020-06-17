
map<ll, ll> decompositPrime(ll n) {
  map<ll, ll> res;
  ll a = 2;
  while (n >= a * a) {
    if (n % a == 0) {
      n /= a;
      if (res.count(a) == 0) res[a] = 0;
      res[a]++;
    } else {
      a++;
    }
  }
  if (n > 1) {
    if (res.count(n) == 0) res[n] = 0;
    res[n]++;
  }

  return res;
}
