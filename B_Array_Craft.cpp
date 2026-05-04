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
ll n,x,y;
cin>>n>>x>>y;
ll pre,suf;
ll arr[n+2];
for(i=y; i<=x; i++){
    arr[i]=1;
}
for(i=y-1; i>=1; i--){
    arr[i]=-arr[i+1];
}
for(i=x+1; i<=n; i++){
     arr[i]=-arr[i-1];
}
for(i=1; i<=n; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
// pre=x-1;
// suf=n-y;
// if(pre>suf){
// ll need=n-pre;
//     for(i=1; i<=need; i++){
//       cout<<-1<<" ";
//     }
//     for(i=pre; i>0; i--){
//         cout<<1<<" ";
//     }
//     cout<<endl;
// }
// else if(suf>pre){ 
//      for(i=suf; i>0; i--){
//         cout<<1<<" ";
//     }
//     ll need=n-suf;
//     for(i=1; i<=need; i++){
//       cout<<-1<<" ";
//     }
  
//     cout<<endl;
// }
// else{
//     for(i=1; i<=n; i++){
//         cout<<1<<" ";
//     }
//     cout<<endl;
// }

        
    }
}