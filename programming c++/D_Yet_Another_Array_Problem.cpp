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
const ll f=200;
const ll INF = 1e9 + 7;
const ll mod = 998244353;
using namespace std;
vector<ll>x;
vector<char>s1(f+10,1);
void primefactor(){
    ll i;
    for(i=2; i<=f; i++)
    {
        if(s1[i]){
            x.push_back(i);
            for(ll j=1LL*i*i; j<=f; j+=i)s1[j]=0;
        }
    }
}
void solve(){
    ll n,i;
    cin>>n;
    ll g=0;
    for (i=0; i<n; i++) {
        ll y;
        cin >> y;
        if (i==0) g=y;
        else g =__gcd(g,y);
    }

    bool ans = 0;
    for (auto it : x) {
        if (g%it!=0) {
            cout<<it<<endl;
            ans=1;
            break;
        }
    }
    if (!ans)cout<<-1<< endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a;
    cin >> a;
    primefactor();
    while (a--)
    {
        solve();
    }
}
