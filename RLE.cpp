//Run-Length-Encoding (ランレングス圧縮)
void RLE(string &x, vector<pair<char, int>> &tango) {
  char now = x[0];
  int cnt = 0;
  for (auto c : x) {
    if (now == c) {
      cnt++;
      continue;
    } else {
      tango.emplace_back(now, cnt);
      now = c;
      cnt = 1;
    }
  }
  tango.emplace_back(now, cnt);
  return;
}
