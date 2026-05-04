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
        ll sum=0;
        for(i=0; i<n; i++){
          ll x;
          cin>>x;
          sum+=x;
        }    
        if(sum%2==0){
            ll newu=k*n;
            if(newu%2==0)yes;
            else no;
        }
        else yes;
        
    }
}