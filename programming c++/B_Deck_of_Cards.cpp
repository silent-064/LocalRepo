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
bool stay(ll mn,ll mx,ll l,ll r) {
    return (mn>=l&&mx<=r);
}
bool removed(ll mn,ll mx,ll l,ll r) {
    return (mx<l||mn>r);
}
void solve() {
    ll n, k;
    string s;
    cin >>n>>k>>s;

    ll c0=0,c2=0,i;
    for (char ch:s) {
        if(ch=='0')c0++;
        else if(ch=='2')c2++;
    }

    ll mn=c0,mx=c0+c2;
    ll rem=n-k;

    string ans;
    ans.reserve(n);

    for (i=1;i<=n;i++) {
        ll l=i-rem;
        ll r=i-1;
        if (l>r) ans.push_back('-');
        else if (stay(mn,mx,l,r))ans.push_back('+'); 
        else if (removed(mn,mx,l,r))ans.push_back('-');
        else ans.push_back('?');
        
    }
    cout<<ans<<endl;
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



    }
}