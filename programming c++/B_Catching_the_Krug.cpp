/*
 * Author : Protic Prappo Durjoy
 * Date :
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
    int a, i;
    cin >> a;
    while (a--)
    {ll n;
        cin>>n;
 ll kr,kc,dr,dc;
        cin>>kr>>kc>>dr>>dc;

        ll ans =0;

      
            if(kr<dr){
                kr = 0;
                ans = dr;
            }else if(kr>dr){
                kr = n;
                ans= max((n-dr),ans);
            }
        
            
            if(kc<dc){
                kc = 0;
                ans = max(dc,ans);
            }else if(kc>dc){
                kc = n;
                ans= max((n-dc),ans);
            }
        

        cout<<ans<<endl;




    }
}