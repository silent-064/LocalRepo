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
vector<ll>x(b);
vector<ll>y(b);
for(i=0; i<b; i++)
{
    cin>>x[i];
    y[i]=x[i];
}
sort(y.begin(),y.end());
bool ans=true;
for(i=0; i<b; i++)
{
    if(x[i]!=y[i])
    {
ans=false;
    }
}
if(ans){yes; continue;}
else if(c==1){no;}
else{yes;}





    }
}