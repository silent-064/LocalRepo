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
           ll modu=676767677;
           cin>>n;
           vector<ll>arr(n);
           for(i=0; i<n; i++){
            cin>>arr[i];
           }      
        //    ll gun[n+1];
        //    ll prefix[n+1];
        //    prefix[0]=arr[0];
        //    gun[0]=arr[0];
            
        ll sum=0,gun=1,temp=1;
        bool ok=true;
        ll j=0;
        //gun=arr[0];
        while(j<n){
           // gun*=arr[j];
            if(arr[j]>1){
                sum+=arr[j];
                //gun=arr[j];
            }
            //temp=gun;
            j++;
        }
 if(arr[n-1]==1)sum++;
        cout<<sum<<endl;

     }
}