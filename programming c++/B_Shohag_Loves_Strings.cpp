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
        string sh;
        cin >> sh;
        bool ans = false;
        for (i = 0; i < (int)sh.size() - 1; i++)
        {
            if (sh[i] == sh[i + 1])
            {
                cout << sh[i] << sh[i + 1] << endl;
                ans = true;
                break;
            }
        }

    
        if (!ans)
        {
            for (i = 0; i < (int)sh.size() - 2; i++)
            {
                set<char> ch; 
                ch.insert(sh[i]);
                ch.insert(sh[i + 1]);
                ch.insert(sh[i + 2]);

                if (ch.size() == 3)
                {
                    cout << sh[i] << sh[i + 1] << sh[i + 2] << endl;
                    ans = true;
                    break;
                }
            }
        }

        if (!ans)
        {
            cout << -1 << endl;
        }
    }
}
