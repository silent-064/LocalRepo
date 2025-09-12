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
        ll b; 
        string s1;
        cin >> b >> s1;

        ll cnt = 1, curr = 1;
        for (i = 1; i < b; i++)
        {
            if (s1[i] == s1[i - 1])
                curr++;
            else
                curr = 1;
            cnt = max(cnt, curr);
        }

        cout << cnt + 1 << endl;
    }
}
