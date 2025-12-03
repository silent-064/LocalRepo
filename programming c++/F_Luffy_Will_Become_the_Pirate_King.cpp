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
cin>>n;
vector<ll>a1(n),b1(n),c1(n);
for(i=0; i<n; i++)cin>>a1[i];
for(i=0; i<n; i++)cin>>b1[i];
for(i=0; i<n; i++)cin>>c1[i];
ll cnt=1;
ll ans=0;
i=0;
while(i<n){
    cnt*=a1[i];
    if(cnt%2==0)ans+=b1[i];
    else if(cnt%2!=0)ans+=c1[i];
    i++;
}
cout<<ans<<endl;



    }
}