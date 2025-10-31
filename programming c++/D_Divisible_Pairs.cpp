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
ll b,c,d;
cin>>b>>c>>d;
vector<ll>x(b);
map<ll,map<ll,ll>>freq;
for(i=0; i<b; i++)
{
    cin>>x[i];
}
ll ans=0;
for(i=0; i<b; i++)
{
    ll modx=x[i]%c;
    ll mody=x[i]%d;
    ans+=freq[(c-modx)%c][mody];
    freq[modx][mody]++;
}
cout<<ans<<endl;


    }
}