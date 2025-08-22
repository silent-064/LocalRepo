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
void solve(ll n, ll &sum){
    sum = 0;
    while(n){
        sum += n % 3;
        n /= 3;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a, i; 
    cin >> a;

    vector<ll> p3(40,1); 
    for(i=1;i<40;i++) p3[i]=p3[i-1]*3;

    while(a--){
        ll n; cin >> n;
        ll sum;
        solve(n, sum);

        ll b = (n - sum)/2;

        vector<ll> cnt(1,n);
        ull ans = 0;
        i = 0;

        while(b){
            if(i >= (ll)cnt.size()) cnt.push_back(0);
            ll x = cnt[i]/3;
            if(x==0){ i++; continue; }

            ll take = min(x,(ll)b);
            ans += take * p3[i];

            cnt[i] -= take*3;
            if(i+1 >= (ll)cnt.size()) cnt.push_back(0);
            cnt[i+1] += take;

            b -= take;
        }

        cout << 3ULL*n + ans << endl;
    }
}