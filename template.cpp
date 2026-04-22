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
constexpr int dy4[]={0, 1, 0, -1};
constexpr int dx4[]={1, 0, -1, 0};
//8方向
constexpr int dy8[] = {-1, -1, -1, 0, 0, 1, 1, 1};
constexpr int dx8[] = {-1, 0, 1, -1, 1, -1, 0, 1}; 
// 範囲内か判定
bool in_grid(int x, int y, int H, int W) {
    return (0 <= x && x < H && 0 <= y && y < W);
}

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

// ==================== 型ごとの演算 ====================

template <class T>
struct ModOp;

// long long int 用
template <>
struct ModOp<long long int> {
    static long long int one() { return 1; }

    static long long int zero() { return 0; }

    static long long int from_int(long long int x) {
        x %= MOD;
        if (x < 0) x += MOD;
        return x;
    }

    static long long int inv(long long int x) {
        return mod_pow(x, MOD - 2);
    }
};

// mint 用
template <int m>
struct ModOp<static_modint<m>> {
    using mint = static_modint<m>;

    static mint one() { return 1; }

    static mint zero() { return 0; }

    static mint from_int(long long int x) {
        return mint(x);
    }

    static mint inv(mint x) {
        return x.inv();
    }
};

// ==================== comb ====================

template <class T>
struct comb {
    vector<T> fact, inv_fact;

    comb() {}

    comb(int n) {
        init(n);
    }

    void init(int n) {
        fact.assign(n + 1, ModOp<T>::one());
        inv_fact.assign(n + 1, ModOp<T>::one());

        for (int i = 1; i <= n; i++) {
            fact[i] = fact[i - 1] * ModOp<T>::from_int(i);
        }

        inv_fact[n] = ModOp<T>::inv(fact[n]);
        for (int i = n; i >= 1; i--) {
            inv_fact[i - 1] = inv_fact[i] * ModOp<T>::from_int(i);
        }
    }

    // n!
    T fact_val(int n) const {
        return fact[n];
    }

    // nPr
    T P(int n, int r) const {
        if (r < 0 || r > n) return ModOp<T>::zero();
        return fact[n] * inv_fact[n - r];
    }

    // nCr
    T C(int n, int r) const {
        if (r < 0 || r > n) return ModOp<T>::zero();
        return fact[n] * inv_fact[r] * inv_fact[n - r];
    }

    // nHr
    T H(int n, int r) const {
        if (n == 0) {
            if (r == 0) return ModOp<T>::one();
            else return ModOp<T>::zero();
        }
        return C(n + r - 1, r);
    }

    // comb(n,k) と書けるように
    T operator()(int n, int k) const {
        return C(n, k);
    }
};

    // comb<long long int> C(2000000);

    // cout << C(5, 2) << "\n";
    // cout << C.C(5, 2) << "\n";
    // cout << C.P(5, 2) << "\n";

    // using mint = modint998244353;

    // comb<mint> C(2000000);

    // cout << C(5, 2).val() << "\n";
    // cout << C.P(5, 2).val() << "\n";


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
