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
      ll n;
      cin>>n;
      vector<ll>arr1(n),arr2(n);
      for(auto &it:arr1)cin>>it;
      for(auto &it:arr2)cin>>it;

      ll sum=0;
      ll temp=0;
      ll cnt=0;
      bool ok=false;
      bool ok1=false;
      ll j=1;
      for(i=0; i<n; i++){
        if(arr1[i]<arr2[i]){
         cnt++;
         temp=i;
        }
        
      }
if(cnt=0)yes;
else if(cnt>1)no;
else{
    ll need=arr2[temp]-arr1[temp];
    arr1[temp]+=need;
    for(i=0; i<n; i++){
        arr1[i]-=need;
        if(i!=temp && arr1[i]<arr2[i]){
            ok=true;
            break;
        }
    }
    if(ok)no;
    else yes;
}
    //   for(i=0; i<n; i++){
    //     if(ok){arr2[i]+=sum;}

    //     if(arr1[i]<arr2[i]){
    //         sum=arr2[i]-arr1[i];
    //         arr1[i]=sum+arr1[i];
    //         ok=true; 
    //         j++;

    //         if(j>2){
    //             if(sum<temp){
    //                 temp-=sum;
    //             }
    //             else{
    //                 ok1=true;
    //                 break;
    //             }
    //         }
    //         temp=sum;
    //     }
    //   } 

    //   if(ok1) no;
    //   else yes;      
    }

}