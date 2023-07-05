VLP prime_factorize(ll N) {
  VLP res;
  for (ll a = 2; a * a <= N; a++) {
    if (N % a != 0) continue;
    long long ex = 0;

    while (N % a == 0) {
      ex++;
      N /= a;
    }
    res.push_back({a, ex});
  }
  if (N != 1) res.push_back({N, 1});
  return res;
}
