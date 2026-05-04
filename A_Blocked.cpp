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
        for(i=0; i<n; i++){
            cin>>arr[i];
        }   
        sort(arr.rbegin(),arr.rend());
        bool ok=1;
        for(i=0; i<n-1; i++)
           {
            if(arr[i]==arr[i+1]){
                ok=0;
                break;
            }
           }
           if(ok){
            for(auto it:arr){
                cout<<it<<" ";
            }
            cout<<endl;
           }
           else cout<<-1<<endl;
             
    }
}