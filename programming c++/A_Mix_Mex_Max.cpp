/*
 * Author : Protic Prappo Durjoy
 * Date :
 */
#include <bits/stdc++.h>
using namespace std;
const long long int mod = 1000000007;
#define int long long int
#define ll long long
#define fr(n, v)            \
    vector<long long> v(n); \
    for (int i = 0; i < n; i++) cin >> v[i];
#define ss(v) sort(v.begin(), v.end());
#define sr(v) sort(v.rbegin(), v.rend());
#define rv(v) reverse(v.begin(), v.end());
#define endl "\n"
#define pb push_back
#define uniq(v) v.resize(unique(v.begin(), v.end()) - v.begin());
#define inf 1e18
#define lcm(a, b) a* b / __gcd(a, b);
#define ct(v) cout << v << endl;
#define ceil(n, x) (n + x - 1) / x;
#define mm(n, m)                                    \
    vector<vector<int>> v(n, vector<int>(m));       \
    for (int i = 0; i < n; i++) {                   \
        for (int j = 0; j < m; j++) cin >> v[i][j]; \
    };
#define mc(n, m)                                    \
    vector<vector<char>> v(n, vector<char>(m));     \
    for (int i = 0; i < n; i++) {                   \
        for (int j = 0; j < m; j++) cin >> v[i][j]; \
    };
#define pr(v)                            \
    for (auto it : v) cout << it << " "; \
    cout << endl;
#define pair(v)                                                    \
    for (auto it : v) cout << it.first << " " << it.second << ","; \
    cout << endl;
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define iss(v) is_sorted(v.begin(), v.end());
#define mini(v) *min_element(v.begin(), v.end())
#define maxi(v) *max_element(v.begin(), v.end())
#define sm(v) accumulate(v.begin(), v.end(), 0LL);
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, i;
    cin >> a;
    while (a--) {
        ll n;
        cin >> n;
        fr(n, v);
        map<ll, ll> mp;
        for (auto it : v)
            if (it != -1) mp[it]++;
        ll k = mp.size();
        for (auto it : v) {
            if (it == 0) {
                no return;
            }
        }
        if (k == 0 || k == 1) yes else no
    }
}