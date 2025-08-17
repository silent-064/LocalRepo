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
#define ll long long
#define ull unsigned long long
using namespace std;
void solve(){
      int a, i;
    cin >> a;
    vector<ll>x(a),y(a),z(a);
    for ( i = 0; i < a; i++)
    {
        cin>>x[i]>>y[i]>>z[i];
    }
    //vector<vector<ll>> dp(a,vector<ll>b(3,0));
    vector<vector<ll>> dp(a, vector<ll>(3, 0));

    dp[0][0]=x[0];
    dp[0][1]=y[0];
    dp[0][2]=z[0];

    for (i = 1; i < a; i++) {
        dp[i][0]=x[i]+max(dp[i-1][1],dp[i-1][2]);
        dp[i][1]=y[i]+max(dp[i-1][2],dp[i-1][0]);
        dp[i][2]=z[i]+max(dp[i-1][1],dp[i-1][0]);
    }
    ll maxi=max({dp[a-1][0],dp[a-1][1],dp[a-1][2]});
    cout<<maxi;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
  solve();
}