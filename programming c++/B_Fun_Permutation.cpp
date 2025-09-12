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
void solve(){
    ll b,i;
cin>>b;
vector<ll>x(b);
vector<ll>y(b);
for(i=0; i<b; i++)
{
    cin>>x[i];
}
 for (i = 0; i < b; i++) y[i] = (b+ 1) - x[i];
   for (i = 0; i < b; i++) {
    cout << y[i]<<" ";  
}
cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, i;
    cin >> a;
    while (a--)
    {

solve();

// sort(x.begin(),x.end());
// for(i=b-1; i>=0; i--)
// {
//     cout<<x[i]<<' ';
// }
// cout<<endl;

    }
}