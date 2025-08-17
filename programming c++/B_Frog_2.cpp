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
    int a, i,j,k;
    cin >> a>>k;
    vector<ll>x(a);
    vector<ll>ans(a,1e18);
    for(i=0; i<a; i++){
        cin>>x[i];
    }
    ans[0]=0;
   // ans[1]=abs(x[1]-x[0]);
    // for(i=2; i<k; i++)
    // {
    //     ans[i]=abs(x[i]-x[i-1]);
    // }
for(i=1; i<a; i++)
{
    for(j=1; j<=k; j++)
    {
        if(i-j>=0){
            ans[i]=min(ans[i],ans[i-j]+abs(x[i]-x[i-j]));

        }
    }
}
cout<<ans[a-1];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}