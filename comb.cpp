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
