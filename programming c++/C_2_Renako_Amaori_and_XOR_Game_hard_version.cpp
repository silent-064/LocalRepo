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
void solve(){
   ll n,i;
    cin>>n;
    vector<ll>arr1(n),arr2(n);
    for(i=0; i<n; i++)
    cin>>arr1[i];
    for(i=0; i<n; i++)
    cin>>arr2[i];
ll x1=0,x2=0;
for(i=0; i<n; i++){
    x2^=arr2[i];
    x1^=arr1[i];
}
ll ans=x1^x2;
ll l,r;
l=34; r=-1;
if(x1!=x2){
while(l>=0 && ((ans>>l)&1)==0)l--;
for(i=0; i<n; i++){
    if((arr1[i]^arr2[i]>>l)&1){
        r=i;
    }
}
if(r%2==0)cout<<"Ajisai"<<endl;
    else{
        cout<<"Mai"<<endl;
    }
}
else cout<<"Tie"<<endl;
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

solve();



    }
}