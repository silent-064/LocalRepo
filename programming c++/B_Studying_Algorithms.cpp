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
    int a,b, i;
    cin >> a>>b;
    vector<ll>arr(a);
    for(i=0; i<a; i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    ll sum=0,cnt=0;
    ll temp=b; 
    for(i=0; i<a; i++){
sum+=arr[i];
if(sum<=temp)
{
    cnt++;
    //temp-=arr[i];
}
else{
    break;
}
    }
    cout<<cnt<<endl;
    // while (a--)
    // {





    // }
}