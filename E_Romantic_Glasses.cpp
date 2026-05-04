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
      ll n;
      cin>>n;
      vector<ll>arr(n);

      for(i=0; i<n; i++){
        cin>>arr[i];
      }

      set<ll>st;

      ll pref = 0;
      bool ok=false;

      st.insert(0);

      for(i=0; i<n; i++){
        if(i%2==0) pref += arr[i];
        else pref -= arr[i];

        if(st.count(pref)){
            ok=true;
            break;
        }

        st.insert(pref);
      }

      if(ok)yes;
      else no;
    }
}