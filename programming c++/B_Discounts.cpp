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
        ll n, k;
        cin >> n >> k;

        vector<ll> arr(n), dis(k);
        for (i = 0; i < n; i++) cin >> arr[i];
        for (i = 0; i < k; i++) cin >> dis[i];

        sort(arr.rbegin(), arr.rend());
        sort(dis.begin(), dis.end());

        ll sum = 0;
        ll pos = 0;

        for (i = 0; i < k; i++)
        {
            ll x = dis[i];
            if (pos + x > n) break;

            for (int t = 0; t < x - 1; t++)
            {
                sum += arr[pos + t];
            }
            pos += x;
        }

        while (pos < n)
        {
            sum += arr[pos];
            pos++;
        }

        cout << sum << endl;
    }
}
