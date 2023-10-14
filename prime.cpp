vector<ll> prime(ll& x) {
  vector<ll> ret;
  for (int i = 1; i * i <= x; i++) {
    if (x % i != 0) continue;
    ret.emplace_back(i);
    if (i != (x / i)) ret.emplace_back(x / i);
  }
  sort(begin(ret), end(ret));
  return ret;
}
