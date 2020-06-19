
std::vector<int> eratosthenes(const int n) {
  std::vector<bool> is_prime(n + 1,true);
  std::vector<int> p;
  for (int i = 2; i <= n; i++) {
    if (is_prime[i]) {
      for (int j = 2 * i; j <= n; j += i) {
        is_prime[j] = false;
      }
      p.emplace_back(i);
    }
  }
  return p;
}
