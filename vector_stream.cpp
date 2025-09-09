// 1次元vectorのオーバーロード
template<class T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& vec) {
    long long int n = vec.size();
    for (long long int i = 0; i < n; ++i) {
        os << vec[i] << (i == n - 1 ? "" : " ");
    }
    return os;
}
// 2次元vectorのオーバーロード
template<class T>
std::ostream& operator<<(std::ostream& os, const std::vector<std::vector<T>>& vec) {
    long long int n = vec.size();
    for (long long int i = 0; i < n; ++i) {
        os << vec[i] << (i == n - 1 ? "" : "\n");
    }
    return os;
}
template<class T> istream& operator>>(istream& is, vector<T>& vec) {
	for ( T& item : vec )
		is >> item;
	return is;
}
