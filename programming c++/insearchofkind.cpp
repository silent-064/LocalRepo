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
    ll v=1;
    while (a--)
    {
ll b;
cin>>b;
vector<ll>x(b);
ll j=1;
for(i=0; i<b; i++){
cin>>x[i];
}
ll bigu=x[0];
bool ok=false;
for(i=1; i<b; i++)
{
    if(bigu<x[i] && ok){
        bigu=x[i];
        j=i+1;
        ok=false;
        continue;
    }
    else if(bigu>=x[i]){
        j=0;
        ok=true;
    }
}
if(j==0)cout<<"Case "<<v<<": Humanity is doomed!"<<endl;
else{
cout<<"Case "<<v<<": "<<j<<endl;
}
v++;


    }
}