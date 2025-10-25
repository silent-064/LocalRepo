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
    int a,i;
ll b,c;
cin>>b>>c;
vector<ll>x(b);
ll sum=0;
for(i=0; i<b; i++)
{
    cin>>x[i];
    sum+=x[i];
}
ll n=sum-c;
bool ans=false;
for(i=0; i<b; i++)
{
    if(n==x[i])
    {
        ans=true;
        break;
    }
}
if(ans)cout<<"Yes"<<endl;
else{cout<<"No"<<endl;}




    
}