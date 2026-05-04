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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t,i;
    cin >> t;
    while (t--)
    {     
      string s;
		cin >> s;
		ll n=s.size();
		ll ans=1;
		ll ansLen=1;
		ll cur=1;
 
		for(i=1; i<n; i++) {
			if (s[i]!=s[i-1]) {
				ansLen++;
				ans=(ans*cur) % mod;
				cur=1;
			} else {
				cur++;
			}
		}
		ans=(ans*cur)%mod;
 
		for (i=1; i<=n-ansLen; i++) {
			ans=(ans*i)%mod;
		}
 
		cout<<n-ansLen<<" "<<ans<<endl;

    }
}