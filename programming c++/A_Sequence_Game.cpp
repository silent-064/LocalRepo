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
ll b;
cin>>b;
vector<ll>x(b);
for(i=0; i<b; i++)
{
    cin>>x[i];
}
ll c;
cin>>c;
sort(x.begin(),x.end());
ll maxu=x[b-1];
ll minu=x[0];
if(minu<=c && c<=maxu){
    yes;
}
else no;


    }
}