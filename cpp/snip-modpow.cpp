// 効率的に累乗を求める
// O(log n)
ll modpow(ll x, ll n){
  ll res=1;
  while(n>0){
    if(n & 1) res = res*a%mod;
    a=a*a%mod;
    n >>= 1;
  }
  return res;
}
