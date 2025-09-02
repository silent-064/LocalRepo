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
    ll a, b, i;
    cin >> a >> b;
    //ll x[a+1];
    // x[0] = 0;
//      int j = 1;
//  for (i = 1; i <= a; i += 2)
//      {
//          x[j] = i;
//          j++;
//     }
//      for (i = 2; i <= a; i += 2)
//      {
//         x[j] = i;
//         j++;
//      }
//      if (b >= 0 && b <= a)
//         cout << x[b];
     if (b == 0) {
         cout << 0 << endl;
     } 
     else if (b <= (a + 1) / 2) {
         cout << 2 * b - 1 << endl;
     } 
     else {
         cout << 2 * (b - (a + 1) / 2) << endl;
    }

}
