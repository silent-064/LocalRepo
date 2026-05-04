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
    {   ll n;
        cin>>n;
        vector<ll>arr(n),even,odd;
        ll temp=0;
        ll j=1;
        for(i=0; i<n; i++){
            ll x;
            cin>>x;
            temp=max(temp,x);
            if(j%2==0){even.push_back(temp);
            arr[i]=temp;}
            else {odd.push_back(x); arr[i]=x;}
j++;
        } 
        // for(auto it:arr){
        //     cout<<it<<" ";
        // }
        // cout<<endl;
        ll cost=0;
        if(n==2){
            if(arr[0]>=arr[1]){
              ll y;
                y=arr[0]-arr[1]+1;
                arr[0]=arr[0]-y;
                cost+=y;  
            }
        }
        for(i=1; i<n-1; i+=2){
          
            if(arr[i-1]>=arr[i]){
                ll y;
                y=arr[i-1]-arr[i]+1;
                arr[i-1]=arr[i-1]-y;
                cost+=y;
            }
             if(arr[i+1]>=arr[i]){
                  ll z;
                z=arr[i+1]-arr[i]+1;
                arr[i+1]=arr[i+1]-z;
                cost+=z;
            }

        } 
        cout<<cost<<endl;
        
    }
}