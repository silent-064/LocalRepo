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
        ll n,x,y;
        cin>>n>>x>>y;
        ll md[n+1];
        vector<ll>arr(n),arr1(n);
        ll maxu=0;
        ll sub=x-y;
        for(i=0; i<n; i++){
            cin>>arr[i];
            arr1[i]=arr[i];
            md[i]=arr[i]%x;
            
            
        }  
        ll sum=0;
        ll newu[n];
        ll los[n];
        for(i=0; i<n; i++){
            arr[i]=arr[i]-md[i];
            ll z=arr[i]/x;
            newu[i]=z*sub;
            los[i]=newu[i]+md[i];
           maxu=max(maxu,los[i]);

        }
       
        // for(auto it:arr){
        //     cout<<it<<" ";
        // }
        //  cout<<endl<<maxu<<endl;
        // for(auto it:los){
        //     cout<<it<<" ";
        // }
        ll pos;
        ll j=0;
        for(auto it:los){
            if(maxu==it){
                pos=j;
                break;
            }
            j++;
        } 
        maxu=arr1[pos];
        ll total;
        for(i=0; i<n; i++){
            if(pos!=i){
               maxu+=arr[i]-newu[i];
            }
        }
        cout<<maxu<<endl;
        
    }
}