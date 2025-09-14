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
ll b,i;
cin>>b;
vector<ll>x(b);
vector<ll>e;
vector<ll>o;
ll cnt=0;
ll sum=0;
for (i = 0; i <b; i++)
{
    cin>>x[i];
if(x[i]%2==0)
{
sum+=x[i];
}
else{
    sum+=x[i];
    o.push_back(x[i]);
    cnt++;
}

}
sort(o.begin(),o.end());
if(cnt==0){cout<<0<<endl;}
else{
if(cnt%2==0){
    for(i=0; i<cnt/2; i++)
    {
        sum-=o[i];
    }
}
else{ cnt=cnt-1;
    for(i=0; i<cnt/2; i++)
    {
        sum-=o[i];
    }
}
cout<<sum<<endl;

}





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