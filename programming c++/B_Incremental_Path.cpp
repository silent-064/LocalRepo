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
set<ll>x;
string s1;
x.clear();
ll b,c;
cin>>b>>c;
cin>>s1;
for(i=0; i<c; i++)
{
    ll y;
    cin>>y;
    x.insert(y);
}
ll cnt=1;
for(char ch:s1)
{
    cnt++;
    if(ch=='B')while(x.count(cnt))cnt++;
    x.insert(cnt);
    if(ch=='B')while(x.count(cnt))cnt++;

}
cout<<x.size()<<endl;
for(auto it:x)
{
    cout<<it<<' ';
}
cout<<endl;



    }
}