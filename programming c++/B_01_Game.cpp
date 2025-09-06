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
string s1;
cin>>s1;
ll cnt0=0,cnt1=0;
for(char &ch:s1)
{
    if(ch=='0')cnt0++;
    else if(ch=='1')cnt1++;
}
ll minu=min(cnt0,cnt1);
// ll x=s1.size()/2;
if(minu%2==0)cout<<"NET"<<endl;
else{cout<<"DA"<<endl;}




    }
}