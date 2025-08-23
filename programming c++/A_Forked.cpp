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
        ll a1, b1, k1, k2, q1, q2;
        cin >> a1 >> b1 >> k1 >> k2 >> q1 >> q2;

        vector<ll> k12 = {-a1, -a1, a1, a1, b1, b1, -b1, -b1};
        vector<ll> q12 = {-b1, b1, b1, -b1, a1, -a1, a1, -a1};

        set<pair<ll, ll>> s1;
        set<pair<ll, ll>> s2;

        for (i = 0; i < 8; i++)
        {
            s1.insert({k1 + k12[i], k2 + q12[i]});
            s2.insert({q1 + k12[i], q2 + q12[i]});
        }

        ll cnt = 0;
        for (auto it : s1)
        {
            if (s2.find(it) != s2.end())
                cnt++;
        }

        cout << cnt << endl;
    }
}
