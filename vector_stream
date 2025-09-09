template<class T> ostream& operator<<(ostream& os, const vector<T>& vec) {
	// os << "[ ";
    long long int n = vec.size();
	for ( long long int i = 0; i < n; i++ )
        os << vec[i] << (i==n-1?"":" ");
	// os << "]"; 
    return os;
}
template<class T> istream& operator>>(istream& is, vector<T>& vec) {
	for ( T& item : vec )
		is >> item;
	return is;
}
