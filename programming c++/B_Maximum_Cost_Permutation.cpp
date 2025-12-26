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
    while (a--)
    {
ll n;
cin>>n;
vector<ll>arr(n+1,0);
map<ll,ll>mp;
for(i=1; i<=n; i++){
    cin>>arr[i];
    mp[arr[i]]=1;
}
ll j=1;
for(i=n; i>=1; i--){
    while(mp.count(j)){j++;}
    if(arr[i]==0){arr[i]=j; j++;}
}
ll maxu=1e18, minu=0;
for(i=1;i<=n;i++){
    if(arr[i]!=i){
        maxu=min(maxu,i);
        minu=max(minu,i);
    }
}
if(maxu!=1e18 && maxu!=minu) cout<<minu-maxu+1<<endl;
else cout<<0<<endl;



    }
}