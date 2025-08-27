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

    int a,i;
    cin >> a;
    while (a--)
    {
        ll n;
        cin >> n;
        vector<ll> y(n);
        for (i = 0; i < n; i++)
        {
            cin >> y[i];
        }

        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        ll l = 1;
        for (i = 1; i < n; i++)
        {
            if (y[i] != y[i - 1])
                break;
            l++;
        }
        ll r = 1;
        for (i = n - 2; i >= 0; i--)
        {
            if (y[i] != y[i + 1])
                break;
            r++;
        }

        ll sum;
        if (y[0] == y[n - 1])
            sum = min(n, l + r);
        else
            sum = min(n, max(l, r));

        cout << (n - sum) << endl;
    }

    return 0;
}
