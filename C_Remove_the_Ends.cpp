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
        vector<ll>arr(n);
        ll maxu;
        ll sum=0;
        for(auto &it:arr){cin>>it;
        if(it<0){
            sum-=it;
        }
        // else{
        //     sum+=it;
        // }
        // maxu=max(sum,maxu);
            //maxu=max(maxu,abs(it));
    }
maxu=sum;
    for(auto it:arr){
      sum+=it;
      maxu=max(maxu,sum);
    }

        
        //ll sum=0;
        // for(i=0; i<n-1; i++){
        //     if(arr[i]>arr[i+1] && arr[i+1]<0){
        //         sum=abs(arr[i+1]+arr[i]);
        //         maxu=max(maxu,sum);
        //     }
        //     else if(arr[i]<arr[i+1]&&arr[i]<0){
        //        maxu=max(abs(arr[i]),abs(arr[i+1]));
        //     }
        // }
        // bool ok=true;
        // ll sum1=0;
        // for(i=0; i<n-1; i++){
        //     if(arr[i]==abs(arr[i])){
        //       sum1+=arr[i];
        //     }
        //     else{
        //         sum1+=abs(arr[i])
        //         maxu=max(sum1,maxu);
        //         break;
        //         //ok=false;
        //     }
        // }
        //ll sum2=0;
        // for(i=0; i<n; i++){
        //     if(arr[i]!=abs(arr[i])){
        //       sum2+=abs(arr[i]);
        //     }
        //     else{
        //         sum2+=arr[i];
        //         maxu=max(sum2,maxu);
        //     }
        // }
cout<<maxu<<endl;


    }
}