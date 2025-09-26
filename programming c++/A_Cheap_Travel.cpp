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
    ll b,c,d,e,l;
    cin >> b >> c >> d >> e;
    l = (b/c)*e + min((b%c)*d , e);  
    ll x = b*d;                      
    l = min(l , x);                 
cout << l;
//  if(b%2==0)
//     {
//       l=min(((b/c)*e),(b*d)); 
//     cout<<l;
 
//     }
//     else{
//         ll x=b-1;
//         l=min((((x/c)*e)+d),(b*d));
// cout<<l;
}
