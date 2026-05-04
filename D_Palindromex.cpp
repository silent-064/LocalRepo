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
       ll n,ans=0;
       cin>>n;n*=2; 
       vector<ll>arr(n*2);
       vector<ll>need; 
       for(i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]==0){
            need.push_back(i);
        }
       }
       
       {
        ll l=need[0],r=need[0];
       set<ll>s;
       while(l>=0 && r<n && arr[l]==arr[r]){
        s.insert(arr[l]);
        l--;
        r++;
       }
       ll mex=0;
       while(s.count(mex))mex++;

       ans=max(ans,mex);
    }
     {
        ll l=need[1],r=need[1];
       set<ll>s;
       while(l>=0 && r<n && arr[l]==arr[r]){
        s.insert(arr[l]);
        l--;
        r++;
       }
       ll mex=0;
       while(s.count(mex))mex++;

       ans=max(ans,mex);
    }

    {
        ll l=(need[0]+need[1])/2;
        ll r=(need[0]+need[1]+1)/2;
       set<ll>s;
       while(l>=0 && r<n && arr[l]==arr[r]){
        s.insert(arr[l]);
        l--;
        r++;
       }
       ll mex=0;
       while(s.count(mex))mex++;

       ans=max(ans,mex);
    }
    cout<<ans<<endl;
       
    }
}