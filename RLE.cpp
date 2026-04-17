//Run-Length-Encoding (ランレングス圧縮)
template <class container>
auto RLE(const container &x) {
    using T = typename container::value_type;
    vector<pair<T, int>> res;
    if (x.empty()) return res;

    T now = x[0];
    int cnt = 0;

    for (const auto &c : x) {
        if (c == now) {
            cnt++;
        } else {
            res.emplace_back(now, cnt);
            now = c;
            cnt = 1;
        }
    }
    res.emplace_back(now, cnt);

    return res;
}
