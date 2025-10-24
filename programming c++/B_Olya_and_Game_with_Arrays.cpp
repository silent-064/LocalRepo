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
ll smaxu=0;
ll minu=1e9+1; 
vector<ll>y;
while(b--)
{
    ll c;
    cin>>c;
    smaxu=max(smaxu,c);
    vector<ll>x(c);
  
    for(i=0; i<c; i++)
    {
       cin>>x[i];
        minu=min(x[i],minu);
    }
    sort(x.begin(),x.end());
     y.push_back(x[1]);
}
sort(y.begin(),y.end());
ll sum1=accumulate(y.begin(),y.end(),0LL);
ll nd=y[0];
cout<<minu+sum1-nd<<endl;



    }
}