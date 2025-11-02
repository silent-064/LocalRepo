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
ll lcm(ll a,ll b){
    return (a*b)/__gcd(a,b);
}
ll sum(ll a,ll b){
    ll cnt=((a+b)*(b-a+1))/2;
    return cnt; 
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
ll b,c,d;
cin>>b>>c>>d;
ll cnt1=(b/c)-(b/lcm(c,d));
ll cnt2=(b/d)-(b/lcm(c,d));
ll ans=sum(b-cnt1+1,b)-sum(1,cnt2);
// ll all=0;
// for(i=1; i<=b; i++)
// {
//     if((b%c==0)&&(b%d==0)){
//         all++;
//     }
//     // else if(b%c==0)c1++;
//     // else if(b%d==0)d1++;

// }
// ll c1=(b/c)-all;
// ll d1=(b/d)-all;
// ll x=b;
// ll y=b;
// ll ans=0;

// for(i=0; i<c1; i++)
// {
//     ans+=x;
//     x--;
// }
// for(i=1; i<d1; i++)
// {
//     ans-=i;
// }
cout<<ans<<endl;


    }
}