/*
 * Author : Protic Prappo Durjoy
 * Date :
 */
#include <bits/stdc++.h>
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll a;
    cin >> a;
    while (a--)
    {
        ll b, c, k;
        cin >> b >> c >> k;

        vector<ll> x(b), y(c);
        for (ll i = 0; i < b; i++) cin >> x[i];
        for (ll i = 0; i < c; i++) cin >> y[i];

        unordered_set<ll> sx(x.begin(), x.end());
        unordered_set<ll> sy(y.begin(), y.end());
        bool ans = true;
        for (ll i = 1; i <= k; i++)
            if (sx.find(i) == sx.end() && sy.find(i) == sy.end()) { ans = false; break; }

        if (!ans) { no; continue; }

        ll mustX = 0, mustY = 0, flex = 0; 
        for (ll i = 1; i <= k; i++)
        {
            bool inX = (sx.find(i) != sx.end());
            bool inY = (sy.find(i) != sy.end());

            if (inX && inY) flex++;
            else if (inX) mustX++;
            else if (inY) mustY++;
        }

        ll m = k / 2;
        if (mustX <= m && mustY <= m && mustX + mustY + flex >= k) yes;
        else no;
    }
}
