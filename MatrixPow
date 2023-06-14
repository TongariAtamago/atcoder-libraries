using mat = vector<vector<ll>>;
ll MOD = 998244353;

mat mat_mul(mat &a, mat &b) {
  mat res(a.size(), vector<ll>(b[0].size()));
  for (int i = 0; i < a.size(); i++) {
    for (int j = 0; j < b[0].size(); j++) {
      for (int k = 0; k < b.size(); k++) {
        (res[i][j] += a[i][k] * b[k][j]) %= MOD;
      }
    }
  }
  return res;
}

mat mat_pow(mat a, ll n) {
  mat res(a.size(), vector<ll>(a.size()));
  for (int i = 0; i < a.size(); i++) res[i][i] = 1;
  while (n > 0) {
    if (n & 1) res = mat_mul(a, res);
    a = mat_mul(a, a);
    n >>= 1;
  }
  return res;
}

int main() {
  ll n;
  cin >> n;

  mat m(2, vector<ll>(2));
  m[0][0] = m[0][1] = m[1][0] = 1;
  m[1][1] = 0;
  m = mat_pow(m, n);
  ll ans = m[1][0];
  cout << ans << endl;
}
