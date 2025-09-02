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
        ll n, m, j;
        cin >> n >> m;

        ll arr[m][26];
        for (i = 0; i < m; i++)
            for (j = 0; j < 26; j++)
                arr[i][j] = 0;

        vector<string> s1, s2;
        string ans;

    
        for (i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            s1.push_back(s);
            for (j = 0; j < m; j++)
            {
                ll x = s[j] - 'a';   
                arr[j][x]++;        
            }
        }

      
        for (i = 0; i < n - 1; i++)
        {
            string s;
            cin >> s;
            s2.push_back(s);
            for (j = 0; j < m; j++)
            {
                ll y = s[j] - 'a';
                arr[j][y]--;
            }
        }

        for (i = 0; i < m; i++)
        {
            for (j = 0; j < 26; j++)
            {
                if (arr[i][j] == 1)  
                {
                    ans += (char)(j + 'a');
                }
            }
        }

        cout << ans << endl;
    }
}
