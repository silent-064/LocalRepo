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
vector<ll>x(b);vector<ll>y(b);
for(i=0; i<b; i++){
    cin>>x[i];
    y[i]=x[i];
}
sort(y.begin(),y.end());
bool ans=1;
for(i=0; i<b; i++){
    if(x[i]!=y[i]){ans=false; break;}
}
if(ans){cout<<0<<endl;continue;}
if((x[b-2]>x[b-1])||((x[b-2]-x[b-1])>(x[b-2])||(x[b-2]-x[b-1])>(x[b-1]))){cout<<-1<<endl;continue;}
cout<<b-2<<endl;
ll j=1;
for(i=0; i<b-2; i++){
    cout<<j<<" "<<b-1<<" "<<b<<endl;
    j++;
}


    }
}