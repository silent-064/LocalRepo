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
    int a, i,j;
    cin >> a;
  vector<ll>dp(a+1,0);
  dp[0]=1;
  for(i=1; i<=a; i++)
  {
    for(j=1; j<=a; j++){
        if(j>i)continue;
         dp[i]+=dp[i-j];
    }


  }
  cout<<dp[a];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}