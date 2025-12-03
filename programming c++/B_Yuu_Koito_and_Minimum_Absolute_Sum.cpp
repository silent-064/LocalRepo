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
vector<ll>arr(n);
for(i=0; i<n; i++)
{
    cin>>arr[i];
}
bool ok,ok2;
if(arr[0]==-1)ok=false;
else ok=true;
if(arr[n-1]==-1)ok2=false;
else ok2=true;
if(!ok&&!ok2){arr[0]=0;arr[n-1]=0;}
else if(!ok2){arr[n-1]=arr[0];}
else if(!ok){arr[0]=arr[n-1];}
ll temp=n-1;
ll cnt=0;
for(i=1; i<temp; i++){
    if(arr[i]==-1){
        arr[i]=0;
    }
    else{
        cnt++;
    }
}
ll need=abs(arr[n-1]-arr[0]);
cout<<need<<endl;
for(i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
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