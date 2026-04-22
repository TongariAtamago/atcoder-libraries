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

//4方向
constexpr int dys[]={0, 1, 0, -1};
constexpr int dxs[]={1, 0, -1, 0};
//8方向
// constexpr int dys[] = {-1, -1, -1, 0, 0, 1, 1, 1};
// constexpr int dxs[] = {-1, 0, 1, -1, 1, -1, 0, 1}; 

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

//繰り返し二乗法
template <class T>
T pow(T x, long long n) {
    T ret = 1;
    while (n > 0) {
        if (n & 1) ret *= x;
        x *= x;
        n >>= 1;
    }
    return ret;
}

constexpr int INF = 1e9;
//constexpr ll INF = 1e18;

static const long long int MOD = 998244353;
// static const long long int MOD = 1000000007;

long long int mod_pow(long long int a, long long int n) {
    long long int r = 1;
    while (n > 0) {
        if (n & 1) r = r * a % MOD;
        a = a * a % MOD;
        n >>= 1;
    }
    return r;
}

struct Comb {
    vector<long long int> fact, inv_fact;

    Comb() {}

    Comb(int n) {
        init(n);
    }

    void init(int n) {
        fact.assign(n + 1, 1);
        inv_fact.assign(n + 1, 1);

        for (int i = 1; i <= n; i++) {
            fact[i] = fact[i - 1] * i % MOD;
        }

        inv_fact[n] = mod_pow(fact[n], MOD - 2);
        for (int i = n; i >= 1; i--) {
            inv_fact[i - 1] = inv_fact[i] * i % MOD;
        }
    }

    long long int factorial(int n) const {
        return fact[n];
    }

    long long int inv_factorial(int n) const {
        return inv_fact[n];
    }

    long long int P(int n, int r) const {
        if (r < 0 || r > n) return 0;
        return fact[n] * inv_fact[n - r] % MOD;
    }

    long long int C(int n, int r) const {
        if (r < 0 || r > n) return 0;
        return fact[n] * inv_fact[r] % MOD * inv_fact[n - r] % MOD;
    }

    long long int H(int n, int r) const {
        if (n == 0) return (r == 0 ? 1 : 0);
        return C(n + r - 1, r);
    }
};

    // Comb comb(2000000);

    // cout << comb.factorial(5) << "\n"; // 120
    // cout << comb.C(5, 2) << "\n";      // 10
    // cout << comb.P(5, 2) << "\n";      // 20
    // cout << comb.H(3, 4) << "\n";      // 15

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
