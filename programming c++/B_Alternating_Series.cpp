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

    int a,i;
    cin >> a;
    while (a--)
    {
        ll b;
        cin >> b;

        if (b == 2) {
            cout << "-1 2\n";
        }
        else {
            for (i = 0; i < b; i++) {
                if (i == b - 1 && b % 2 == 0) cout << 2;
                else {
                    if (i % 2 == 0) cout << -1 << " ";
                    else cout << 3 << " ";
                }
            }
            cout << endl; 
        }
    }
}
