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
    int a, i;
    cin >> a;
    while (a--)
    {
ll b,c;
cin>>b>>c;
vector<pair<ll,ll>>x(b);
for(i=0; i<b; i++)
{
    ll y;
    cin>>y;
    x[i]={y,i+1};
}
for(i=0; i<b; i++)
{
    x[i].first=x[i].first%c;
    if(x[i].first==0)
    {
        x[i].first=c;
    }
}
sort(x.begin(),x.end(),[](auto a,auto b)
{
    if(a.first!=b.first)return a.first>b.first;
    return a.second<b.second;
});
for(auto it:x)
{
    cout<<it.second<<" ";
}
cout<<endl;
    }
}
