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
ll lcm(ll a, ll b){
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
    {     
      ll a,b,c,m;
      cin>>a>>b>>c>>m;
      ll ali=m/a;
      ll bo=m/b;
      ll cor=m/c;
      ll ab=m/lcm(a,b);
      ll bc=m/lcm(b,c);
      ll ca=m/lcm(c,a);
      ll abc=m/lcm(c,lcm(a,b));
      ll alice=6*ali-3*(ab+ca)+2*abc;
      ll bob=bo*6-3*(ab+bc)+2*abc;
      ll coral=cor*6-3*(ca+bc)+2*abc;
      cout<<alice<<" "<<bob<<" "<<coral<<endl;

    }
}