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
ll mod=676767677;
    ll t,i;
    cin >> t;
    while (t--)
    {   
        ll x,y,ans=0;
        cin>>x>>y;
        ll n=abs(x-y);
        if(n==0){
            cout<<1<<endl;
        }  
        else{
        
            for(i=1; i*i<=n; i++){
    if(n%i==0){
        ans++;
        //div.push_back(i);
        if(n/i!=i)ans++;//div.push_back(n/i);
         
    } 
}
 //ans=ans%mod;
    cout<<ans<<endl;
        }
        for(i=0; i<x; i++){
            cout<<1<<" ";
        }
        for(i=0; i<y; i++){
            cout<<-1<<" ";
        }
        cout<<endl;
    }
}