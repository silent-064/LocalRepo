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

    int a, i;
    cin >> a;
    while (a--) {
        int a, b, c;
        cin >> a >> b >> c;

        int diff = abs(a - b);
        int dif1 = abs(a - c);

        bool found = 0;
        for (i = 1; i <= 100000; i++) {
            if (i == a) continue;
            if (abs(i - b) < diff) {
                if (abs(i - c) < diff) {
                    found = 1;
                    break;
                }
            }
        }

        if (found)
            yes;
        else
            no;
    }

    return 0;
}
