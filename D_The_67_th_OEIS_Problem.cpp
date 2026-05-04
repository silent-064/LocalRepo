/*
 * Author  : Protic Prappo Durjoy
 * Platform: Codeforces
 * Problem : 
 * Date    :
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

const int N = 1e6 + 9;
bitset<N> f;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t,i;
    cin >> t;
    int n =N-10;
  vector<int> primes;
  f[1] = true;
  for (int i = 2; i * i <= n; i++) {
    if (!f[i]) {
      for (int j = i * i; j <= n; j += i) {
        f[j] = true;
      }
    }
  }
  for (int i = 2; i <= n; i++) {
    if (!f[i]) {
      primes.push_back(i);
    }
  }
while (t--) {
        ll n,i;
        cin >> n;

        ll x = n;
        if (n % 2 != 0) x = n + 1;

        ll need = x / 2;

        vector<ll> ans;

        for (i = 0; i < need; i++) {
            ans.push_back(primes[i]);
            ans.push_back(primes[i+1]);
        }
        ll z=1;
        for (i = 0; i < n; i++) {

            cout <<z*primes[i];
            z=primes[i];
            
            if (i != n - 1) cout << " ";
        }
        cout << endl;
    }

              
    
}