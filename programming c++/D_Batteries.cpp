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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll a, i;
    cin >> a;
    while (a--)
    {
        ll b,j;
        cin>>b;
        bool ok=1;
for(i=1;i<=b && ok; i++)
{
    for(j=1; j<=b && ok; j++)
    {
        ll ans=i+j;
        if(ans>b)ans-=b;
        cout<<j<<" "<<ans<<endl;
        cout.flush();
        ll x;
        cin>>x;
if(x==1)ok=0;
    }
}





    }
}