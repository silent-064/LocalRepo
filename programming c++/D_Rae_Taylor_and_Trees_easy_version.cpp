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
ll check(ll x,ll y){
    if(x<=y)return x;
    else return y;
}
bool ok(ll x,ll y){
    return (x==y);
}
// void solve(){
// //         ll n,i;
// //     cin>>n;
// //     vector<ll>arr1(n),arr2(n);
// //     for(i=0; i<n; i++)
// //     cin>>arr1[i];
// //     for(i=0; i<n; i++)
// //     cin>>arr2[i];
// // ll x1=0,x2=0;
// // for(i=0; i<n; i++){
// //     x2^=arr2[i];
// //     x1^=arr1[i];
// // }
// // if(x1==x2)
// ll n;
// cin>>n;
// vector<ll>x(n);

// }
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
bool ans=true;
ll minu=INT_MAX;
vector<ll>ck(n+10,0);
for(i=0; i<n-1; i++){
    ck[i]=check(minu,arr[i]);
    minu=ck[i];
    ll temp1=n-i;
    ll temp2=0;
    ll need=temp1+temp2;
    if(minu<=need || minu>=need){
        if(ok(minu,need)){
         ans=false;
         break;   
        }
    }

}
if(ans)yes;
else no;
//solve();


    }
}