long long editdistance(string &s, string &t) {
  ll sl = s.size();
  ll tl = t.size();

  vector<vector<ll>> dp(sl + 1, vector<ll>(tl + 1));

  for (int i = 0; i <= sl; i++) dp[i][0] = i;
  for (int j = 0; j <= tl; j++) dp[0][j] = j;

  for (int i = 1; i <= sl; i++) {
    for (int j = 1; j <= tl; j++) {
      int D = dp[i - 1][j] + 1;
      int I = dp[i][j - 1] + 1;
      int C = dp[i - 1][j - 1] + (s[i - 1] == t[j - 1] ? 0 : 1);

      dp[i][j] = min({D, I, C});
    }
  }

  return dp[sl][tl];
}
