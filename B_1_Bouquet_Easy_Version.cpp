/*
 * Author  : Protic Prappo Durjoy
 * Platform: Codeforces
 * Problem : 
 * Date    :
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

    ll t,i;
    cin >> t;
    while (t--)
    {     
      ll n,m;
      cin>>n>>m;
      vector<ll>arr(n);
      //map<ll,ll>freq;
      for(i=0; i<n; i++){
        cin>>arr[i];
        
      }
      sort(arr.begin(),arr.end());
      ll maxu=0;
     ll l,r;
     l=0;
     r=0;
     ll sum=0;
     while(l<n){
        sum+=arr[l];
        while(r<=l&&(sum>m || arr[l]-arr[r]>1)){
            sum-=arr[r];
            r++;
        }
        maxu=max(maxu,sum);
        l++;
        
     }
     cout<<maxu<<endl;
        
    }
}