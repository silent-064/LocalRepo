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
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, k, j, i;
    cin >> a;
    while (a--) {
        cin >> j >> k;
        char ch[j];
        ll ones = 0, zero = 0;
        for (i = 0; i < j; i++) {
            cin >> ch[i];
            if (ch[i] == '1')
                ones++;
            else
                zero++;
        }
        // if (ones <= k)
        //     cout << "Alice" << endl;
        if (ones > k && j >= 2 * k)
            cout << "Bob" << endl;
        else
            cout << "Alice" << endl;
    }
}