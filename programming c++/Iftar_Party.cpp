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
    ll a, i;
    cin >> a;
    ll n=1;
    while (a--)
    {
ll p,l;
cin>>p>>l;
ll need=p-l;
if(need<=l){cout<<"Case "<<n<<": impossible"<<endl;}
else{
vector<ll>div;
for(i=1; i*i<=need; i++){
    if(need%i==0){
        if(i>l)
        {div.push_back(i);}
        if(need/i!=i)
        {
            if(need/i>l)
            {div.push_back(need/i);}}
    }
}
sort(div.begin(),div.end());

//cout<<n<<endl;
if(div.empty()){cout<<"Case "<<n<<": impossible"<<endl;}
else{
    cout<<"Case "<<n<<": ";
for(auto it:div){
    cout<<it<<" ";
  
}
cout<<endl;}}
n++;

    

    }
}