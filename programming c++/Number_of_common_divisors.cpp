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
//const ll n=1e6+7;
 //vector<ll>div(n+1,0);
ll divisors(ll n){
   ll i;
   ll cnt=0;
for(i=1; i*i<=n; i++){
    if(n%i==0){cnt++;
        //div.push_back(i);
        if(n/i!=i)cnt++;//div.push_back(n/i);
    }
 
} 
  return cnt;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, i;
    cin >> a;
    //divisors();
    while (a--)
    {ll a,b;
        cin>>a>>b;
        ll g=__gcd(a,b);
        cout<<divisors(g)<<endl;





    }
}