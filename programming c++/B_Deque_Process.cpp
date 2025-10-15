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
string s1="";
ll a;
cin>>a;
vector<ll>x(a);
vector<ll>g(a);
// vector<ll>l(a);
for(i=0; i<a; i++)
{
cin>>x[i];
g[i]=x[i];
// l[i]=x[i];
}
// sort(g.rbegin(),g.rend());
// sort(l.begin(),l.end());
// bool ans=true;
// for(i=0; i<a; i++)
// {
//     if(g[i]!=x[i] && l[i]!=x[i])ans=false;
// }
ll l=0,r=a-1;
for(i=0; i<a; i++){
    if((i%2==0)^(x[l]<x[r])){
cout<<'L';
l++;
    }
    else{ cout<<"R";
    r--;} 
}
cout<<endl;

    }
}