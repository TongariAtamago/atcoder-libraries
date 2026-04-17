#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;
#define rep1(a)          for(ll i = 0; i < a; i++)
#define rep2(i, a)       for(ll i = 0; i < a; i++)
#define rep3(i, a, b)    for(ll i = a; i < b; i++)
#define rep4(i, a, b, c) for(ll i = a; i < b; i += c)
#define overload4(a, b, c, d, e, ...) e
#define rep(...) overload4(__VA_ARGS__, rep4, rep3, rep2, rep1)(__VA_ARGS__)
// using P = pair<int,int>;
// using LP = pair<ll, ll>;
// using VI = vector<int>;
// using VL = vector<ll>;
// using VP = vector<P>;
// using VLP = vector<LP>;
// using VVI = vector<vector<int>>;
// using VVL = vector<vector<ll>>;
constexpr int dys[]={0, 1, 0, -1};
constexpr int dxs[]={1, 0, -1, 0};

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

long long int pow(long long x, long long n) {
    long long ret = 1;
    while (n > 0) {
        if (n & 1) ret *= x;  // n の最下位bitが 1 ならば x^(2^i) をかける
        x *= x;
        n >>= 1;  // n を1bit 左にずらす
    }
    return ret;
}

constexpr int INF = 1e9;
//constexpr ll INF = 1e18;

void solve(){
  
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int kkk = 1;
  while(kkk--){
    solve();
  }
  return 0;
}
