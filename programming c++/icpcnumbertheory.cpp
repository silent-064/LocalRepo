/*
 * Author : Protic Prappo Durjoy
 * Date :
 */
#include <bits/stdc++.h>
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ft float
#define du double
#define ull unsigned long long
#define ll long long
const ll INF = 1e9 + 7;
const ll mod = 998244353;
using namespace std;
const int N = 1e6 + 5;

// ---------- GLOBAL ----------
int spf[N];              // smallest prime factor
vector<int> primes;      // list of primes
bool is_prime[N];        // prime table (optional)

// ---------- SIEVE + SPF ----------
void build_sieve() {
    // mark all prime initially
    for (int i = 2; i < N; i++) {
        is_prime[i] = true;
        spf[i] = i;
    }

    for (int i = 2; i * i < N; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j < N; j += i) {
                is_prime[j] = false;
                spf[j] = min(spf[j], i);
            }
        }
    }

    // collect primes
    for (int i = 2; i < N; i++) {
        if (is_prime[i]) primes.push_back(i);
    }
}

// ---------- PRIME CHECK ----------
bool isPrime(int x) {
    return (x >= 2 && spf[x] == x);
}

// ---------- FACTORIZATION ----------
vector<pair<int,int>> factorize(int n) {
    vector<pair<int,int>> fac;
    while (n > 1) {
        int p = spf[n];
        int cnt = 0;
        while (n % p == 0) {
            n /= p;
            cnt++;
        }
        fac.push_back({p, cnt});
    }
    return fac;
}

// ---------- NUMBER OF DIVISORS ----------
int count_divisors(int n) {
    auto f = factorize(n);
    int ans = 1;
    for (auto &x : f) {
        ans *= (x.second + 1);
    }
    return ans;
}

// ---------- SUM OF DIVISORS ----------
long long sum_divisors(int n) {
    auto f = factorize(n);
    long long sum = 1;
    for (auto &x : f) {
        int p = x.first, e = x.second;
        long long term = 1;
        long long cur = 1;
        for (int i = 0; i < e; i++) {
            cur *= p;
            term += cur;
        }
        sum *= term;
    }
    return sum;
}

// ---------- EULER TOTIENT ----------
int phi(int n) {
    auto f = factorize(n);
    int res = n;
    for (auto &x : f) {
        int p = x.first;
        res -= res / p;
    }
    return res;
}

// ---------- MAIN ----------
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    build_sieve();

    // Example usage:
    int n;
    cin >> n;

    cout << "Prime? " << (isPrime(n) ? "YES\n" : "NO\n");

    auto f = factorize(n);
    cout << "Factorization: ";
    for (auto &x : f) cout << x.first << "^" << x.second << " ";
    cout << "\n";

    cout << "Divisors count: " << count_divisors(n) << "\n";
    cout << "Sum of divisors: " << sum_divisors(n) << "\n";
    cout << "Phi(n): " << phi(n) << "\n";

    return 0;
}
