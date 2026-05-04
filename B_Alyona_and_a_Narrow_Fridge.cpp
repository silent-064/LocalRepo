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

    ll t,i,j;
        
      ll n,k,cnt;
      cin>>n>>k;
      cnt=n;
      vector<ll>arr(n);
      for(i=0; i<n; i++){
        cin>>arr[i];
      }  
      vector<ll>arr1;
      for(i=0; i<n; i++){
        ll sum=0;
        arr1.push_back(arr[i]);
        ll s=arr1.size();
        sort(arr1.rbegin(),arr1.rend());
        for(j=0; j<s; j+=2){
          sum+=arr1[j];
        }
        if(sum>k){cnt=s-1; break;}

      }
      cout<<cnt<<endl;
    
}