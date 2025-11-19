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
ll power(ll base,ll p){
ll ans=1;
while(p){
 if(p%2==1){
    ans=(ans*base)%INF;
    p--;

 }   
 else{
    base=(base*base)%INF;
    p/=2;
 }
}
return ans%INF;
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
ll n,k;
cin>>n>>k;
cout<<power(n,k)<<endl;




    }
}