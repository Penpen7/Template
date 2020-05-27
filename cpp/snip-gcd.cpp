ll _gcd(ll a, ll b) { return b != 0 ? _gcd(b, a % b) : a; }
