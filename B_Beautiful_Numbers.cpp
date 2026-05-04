/*
 * Author   : Protic Prappo Durjoy
 * Platform : Codeforces
 * Problem  : 
 * Date     :
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
void solve(ll n) {
    ll i,j;
    ll temp = n;
    ll sum = 0;
    vector<ll> arr;
    while (temp > 0) {
        ll mod=temp % 10;
        sum+=mod;
        arr.push_back(mod);
        temp /= 10;
    }
    if (sum<=9) {
        cout<<0<<endl;
    }
    else{
        reverse(arr.begin(), arr.end());
    vector<ll> sub;
    for (i=0; i<arr.size(); i++) {
        if (i==0)sub.push_back(arr[i]-1);
        else sub.push_back(arr[i]);
    }
    sort(sub.rbegin(),sub.rend());
    ll cnt = 0;
    for (auto it:sub) {
        if (sum<=9) break;
        if (it>0) {
            sum-=it;
            cnt++;
        }
    }
    cout<<cnt<<endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t,i;
    cin >> t;
    while (t--) {
        ll n;
        cin>>n;
        solve(n);
    }
    return 0;
}