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
    ll b,c,i;
    cin>>b>>c;
    vector<ll>x(b);
    for(i=0; i<b; i++)
    {
        cin>>x[i];
    } 
    sort(x.begin(),x.end());
    ll minu;
    if(b<c)minu=b;
    else minu=c;
    ll ans=0;
    for(i=0; i<minu; i++)
    {
        ans+=x[b-1-i]*(c-i);
    }
    cout<<ans<<endl;
}
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