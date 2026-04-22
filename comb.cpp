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
