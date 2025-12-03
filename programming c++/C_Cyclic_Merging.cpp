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
ll n;
cin>>n;
vector<ll>arr(n);
for(i=0; i<n; i++){
    cin>>arr[i];
}
ll ans=0,maxu=0;
ll c=0;
for(i=0; i<n; i++){
c=max(arr[i],arr[(i+1)%n]);
ans+=c; 
maxu=max(c,maxu);
}
ans-=maxu;
cout<<ans<<endl;



    }
}