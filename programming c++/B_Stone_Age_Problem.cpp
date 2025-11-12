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
    //int a, i;
    //cin >> a;
   ll b,c,i;
   cin>>b>>c;
vector<ll>x(b);
vector<ll>t(b);
ll sum=0;
ll ans=0;
for(i=0; i<b; i++){
    cin>>x[i];
    sum+=x[i];
    ans+=x[i];
    t[i]=-1;
}
ll y;
ll tmp=-2;
ll cnt=0;

 i=0;
// cout<<sum<<endl;
while(c--){
    cin>>y;
    if(y==1){
        ll d,e;
        cin>>d>>e;
        d--;
        if(t[d]<tmp)ans=ans-cnt+e;
        else ans=ans-x[d]+e;
        x[d]=e;
        t[d]=i;
    }
    else{
        ll e;
        cin>>e;
        ans=e*b;
        tmp=i;
        cnt=e;
    }
    i++;
    cout<<ans<<endl;
}

}