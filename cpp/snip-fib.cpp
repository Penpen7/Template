map<ll, ll> store;
ll fib(ll n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    if (store.count(n) == 0)
    {
        store[n] = fib(n - 1) + fib(n - 2);
    }

    return store[n];
}