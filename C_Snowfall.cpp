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
      vector<ll>six,eve,odd,any;
      for(i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]%6==0){six.push_back(arr[i]);}
        else if(arr[i]%2==0){
            eve.push_back(arr[i]);
        }
        else if(arr[i]%3==0){
            odd.push_back(arr[i]);
        }
        else{any.push_back(arr[i]);}
      }
       for(auto it:six){
        cout<<it<<" ";
       }
     // if(eve.size()>odd.size()){
        for(auto it:eve){
            cout<<it<<" ";
        }
        for(auto it:any){
            cout<<it<<" ";
        }
        for(auto it:odd){
            cout<<it<<" ";
        }
      //}
    //   else{
    //      for(auto it:odd){
    //         cout<<it<<" ";
    //     }
    //      for(auto it:eve){
    //         cout<<it<<" ";
    //     }
    //   }
      
       cout<<endl;
    }
}