VL enum_divisors(ll N) {
  VL res;
  for (ll i = 1; i * i <= N; i++) {
    if (N % i == 0) {
      res.emplace_back(i);
      if (N / i != i) res.emplace_back(N / i);
    }
  }
  sort(res.begin(), res.end());
  return res;
}
