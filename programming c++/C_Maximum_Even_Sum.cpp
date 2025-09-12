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
void solve()
{
    ll a, b;
    cin >> a >> b;

    if (b & 1) {
        if (a & 1) cout << a * b + 1 << endl;
        else cout << -1 << endl;
        return;
    }

    ll bb = b;
    ll z = 0;
    while ((bb & 1) == 0) {
        bb >>= 1;
        ++z;
    }

    if ((a & 1) && z == 1) {
        cout << -1 << endl;
        return;
    }

    ll kmin = (a & 1) ? 2 : 1;
    ll s1 = a * kmin + b / kmin;
    ll s2 = a * (b / 2) + 2;
    cout << max(s1, s2) << endl;
}
// void solve()
// {
//     ll b,c,i,cnt;
//     cin>>b>>c;
//  ll ans1,ans2;
// ll maxu=0;
//  bool ans=true;
// for(i=1; i<=c; i++)
//     {
//         if(c%i==0 )
//         {
// cnt=i;
// ans1=cnt*b;
//     ans2=c/cnt;
//     if((ans1+ans2)%2==0){
//         maxu=max((ans1+ans2),maxu);
//         ans=false;
//     }
//         }
//     }
//    if(ans)cout<<-1<<endl;
//     if(!ans)cout<<maxu<<endl;
//     }
    

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, i;
    cin >> a;
    while (a--)
    {
solve();




    }
}
