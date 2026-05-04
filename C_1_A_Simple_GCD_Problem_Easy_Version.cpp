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
ll lcm(ll a,ll b){
    return a*b/__gcd(a,b);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t,i;
    cin >> t;
    while (t--)
    {     ll n;
        cin>>n;
        vector<ll>arr1(n),arr2(n);
        for(i=0; i<n; i++){
            cin>>arr1[i];
        }
        for(i=0; i<n; i++)cin>>arr2[i];
        vector<ll>pregcd(n);
        pregcd[0]=__gcd(arr1[0],arr1[1]);
        for(i=1; i<n-1; i++){
            pregcd[i]=lcm(__gcd(arr1[i],arr1[i-1]),__gcd(arr1[i],arr1[i+1]));
        }
        ll cnt=0;
         pregcd[n-1]=__gcd(arr1[n-2],arr1[n-1]);
         for(i=0; i<n; i++)
         {
            if(arr2[i]!=pregcd[i])cnt++;
         }
         cout<<cnt<<endl;

        
    }
}