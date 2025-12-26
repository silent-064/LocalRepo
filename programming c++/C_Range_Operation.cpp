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
vector<ll>arr(n+1,0);
ll sum=0;
for(i=1; i<=n; i++){
    cin>>arr[i];
sum+=arr[i];
arr[i]=2*i-arr[i];
}
ll b=0;
ll nxt=0;
for(i=1; i<=n; i++){
    b=max(arr[i],arr[i]+b);
    nxt=max(b,nxt);
}
cout<<sum+nxt<<endl;

// ll l=1; r=n;
// while(l<=r){
//     if(arr[l]<=l){

//     }
}




    }
