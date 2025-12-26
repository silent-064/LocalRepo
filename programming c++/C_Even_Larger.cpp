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
vector<ll>arr(n+2,0);
for(i=1; i<=n; i++){
    cin>>arr[i];
}
ll need=0,ans=0,cnt=0;
ll temp=0;
for(i=2; i<=n; i+=2){
   need=arr[i-1]+arr[i+1]-arr[i];
   ans+=max(0ll,need);
   if(need<=0)continue;
   if(need<=arr[i+1])arr[i+1]-=need;
   else arr[i+1]=0;
}
cout<<ans<<endl;


    }
}