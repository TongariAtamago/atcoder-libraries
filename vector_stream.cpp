// 1次元vectorの出力
template<class T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& vec) {
    long long int n = vec.size();
    for (long long int i = 0; i < n; ++i) {
        os << vec[i] << (i == n - 1 ? "" : " ");
    }
    return os;
}
// 2次元vectorの出力
template<class T>
std::ostream& operator<<(std::ostream& os, const std::vector<std::vector<T>>& vec) {
    long long int n = vec.size();
    for (long long int i = 0; i < n; ++i) {
        os << vec[i] << (i == n - 1 ? "" : "\n");
    }
    return os;
}
// 1次元vectorの入力
template<class T>
std::istream& operator>>(std::istream& is, std::vector<T>& vec) {
    for (T& item : vec) {
        is >> item;
    }
    return is;
}
// 2次元vectorの入力
template<class T>
std::istream& operator>>(std::istream& is, std::vector<std::vector<T>>& vec) {
    for (auto& row : vec) {
        is >> row;
    }
    return is;
}
