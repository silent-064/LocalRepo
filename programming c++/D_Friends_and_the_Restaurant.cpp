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
vector<ll>arr(n,0);
for(i=0; i<n; i++){
    ll b;
    cin>>b;
    arr[i]-=b;
}
for(i=0; i<n; i++){
    ll c;
cin>>c;
arr[i]+=c;
}
ll l=0,r=n-1;
ll cnt=0;
sort(arr.rbegin(),arr.rend());
while(l<r){
    if(arr[l]>-1 && arr[r]>-1){
        cnt++;
        l++; r--;
    }
    else if(arr[l]<0 && arr[r]<0){break;}
    else if(arr[l]>-1){
        if(arr[l]>=abs(arr[r])){
            cnt++;
            l++;r--;
        }
        else{
            r--;
        }
    }
}
cout<<cnt<<endl;



    }
}