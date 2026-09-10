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
bool chk(ll n){
    ll j=n;
    while(j>=1){
        ll x=j%10;
        if(x==0){
            return false;
        }
        j/=10;
          
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t,i;
    cin >> t;
    ll sum=0;
     for(i=1; i<=t; i++){
       if(chk(i)){
        sum+=i;
       }
     }
     cout<<sum<<endl;
}