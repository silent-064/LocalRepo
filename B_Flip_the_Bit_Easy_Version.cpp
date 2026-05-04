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
        ll n,k;
        cin>>n>>k;
        vector<ll>arr(n);
        for(i=0; i<n; i++){
            cin>>arr[i];
        }   
        ll p;
        cin>>p;
        p=p-1;
        ll idx=-1;
        for(i=0; i<n; i++){
            if(arr[i]!=arr[p]){
               idx=i;
               break;
            }
        }
        ll l=0;
        for(i=p+1; i<n; i++){
            if(arr[i]!=arr[i-1]){l++;}
        }
        ll r=0;
        for(i=p-1; i>=0; i--){
            if(arr[i]!=arr[i+1]){r++;}
        }
        if(idx==-1)cout<<0<<endl;
        else{
            ll ans=max(l,r)+1;
           // ans/=2;
           // ans*=2;
            cout<<ans<<endl;
        }
        
    }
}