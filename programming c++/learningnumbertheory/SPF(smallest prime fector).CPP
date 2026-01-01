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
ll n=1e6+7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll a, i;
    // cin >> a;
    // while (a--)
    // {
vector<ll>spf(n+1,0);
for(i=2; i<=n; i++){
    if(spf[i]==0){
        spf[i]=i;
        if(i*i<=n){
            for(ll j=i*i; j<=n; j+=i){
                if(spf[j]==0){
                    spf[j]=i;
                }
            }
        }
    }
}
 for (int i = 1; i <= 5; ++i) {
         cout << "SPF(" << i << ") = " << spf[i] << '\n';
     }
int x = 84;
    cout << "\nFactorization of " << x << " : ";
    ll sum=0;
    while (x > 1) { 
        //sum+=spf[x];
        cout << spf[x];
        x /= spf[x];
       
        if (x > 1) cout << " * ";
    }
    cout << '\n';
   // cout<<"SUM"<<sum<<endl;


    }
