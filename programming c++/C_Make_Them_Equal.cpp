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
    {
ll n;
char ch;
cin>>n>>ch;
string s1;
cin>>s1;
bool ok=0;
ll ans;
ll cnt=0;
for(i=0; i<n; i++){
    if(s1[i]!=ch){
         cnt++; 
    }
    else{
        ok=1;
      ans=i+1;
    }
}
if(cnt==0)cout<<0<<endl;
else if(ok){
    cout<<1<<endl<<ans<<endl;
//  if (s1[n-1]!=ch)
// {cout<<2<<endl;
//     cout<<n<<" "<<n-1<<endl;
// }
// else{
//     cout<<1<<endl;
//     cout<<n<<endl;
// }   
}
// else if(s1[n-1]!=ch){cout<<endl;cout<<n-1<<endl;}

else{
    cout<<2<<endl<<n<<" "<<n-1<<endl;
}




    }
}