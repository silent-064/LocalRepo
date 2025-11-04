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
for(i=0; i<b; i++)
{
    cin>>x[i];
}
vector<ll>rem(c);
for(i=0; i<b; i++)
{
    rem[x[i]%c]++;
}
ll cnt=0;
for(i=0; i<c; i++)
{
    ll z=rem[i];
    ll y=rem[(c-i)%c];
    if(z==0 && y==0){
        continue;
    }
    ll temp=min(z,y);
    z-=min(temp+1,z);
    y-=min(temp+1,y);
    cnt++;
    cnt+=(z+y);
    rem[i]=0;
    rem[(c-i)%c]=0;

}
cout<<cnt<<endl;
    }
}