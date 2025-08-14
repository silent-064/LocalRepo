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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, i;
    cin >> a;
    while (a--)
    {
ll n; cin >> n;
        vector<ll> a(n); 
        vector<ll>b(n);
        for (i = 0; i < n; i++) cin >> a[i];
        for (i = 0; i < n; i++) cin >> b[i];
        ll cnt = 0;
        ll x=1;
        while (x) {
            bool d = 0, u = 0;
            for (i = 0; i < n; i++) if (a[i] > b[i]) d = 1;
            for (i = 0; i < n; i++) if (a[i] < b[i]) u = 1;
            cnt++;
            if (d) for (i = 0; i < n; i++) if (a[i] > b[i]) { a[i]--; break; }
            if (u) for (i = 0; i < n; i++) if (a[i] < b[i]) { a[i]++; break; }
            if (!d) break;
        }
        cout << cnt <<endl;


    }
}