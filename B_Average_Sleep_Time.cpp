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

    ll t,i,n,k;
    cin>>n>>k;
 double div=n-k+1;
double sum=0;
//     for(i=0; i<n; i++){
// ll x;
// cin>>x;
// if(i>=1 && i<n-1){
//     sum+=2*x;
// }
// else sum+=x;
//     }
vector<ll>pref(n+1,0);
    for(i=1;i<=n;i++){
        ll x;
        cin>>x;
        pref[i]=pref[i-1]+x;
    }
    for(i=k;i<=n;i++){
        sum+=pref[i]-pref[i-k];
    }
    double ans=sum/div;
    cout<<fixed<<setprecision(10)<<ans<<endl;

    
}
