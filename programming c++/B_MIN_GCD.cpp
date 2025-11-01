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
ll b;
cin>>b;
vector<ll>x(b);
for(i=0; i<b; i++)
{
cin>>x[i];
}
ll gcd=0;
bool ans=false;
sort(x.begin(),x.end());
for(i=1; i<b; i++)
{
    if(x[i]%x[0]==0){
        gcd=__gcd(x[i],gcd);
        if(gcd==x[0]){ans=true;break;}
    }
}
if(ans)yes;
else no;


    }
}