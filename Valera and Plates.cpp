/*
 * Author : Protic Prappo Durjoy
 * Date :18/4/25
 */
#include <bits/stdc++.h>
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ft float
#define du double
#define ull unsigned long long
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, b, c, i;
    cin >> a >> b >> c;
    int x[a + 1];
    for (i = 0; i < a; i++) {
        cin >> x[i];
    }
    int count = 0, count1 = 0;
    for (i = 0; i < a; i++) {
        if (x[i] == 1) {
            count++;
        } else if (x[i] == 2) {
            count1++;
        }
    }
    int ex = (b - count);
    int ex2;
    if (ex > 0) {
        c = c + ex;
        ex2 = c - count1;
        cout << abs(ex2) << endl;
    } else {
        ex2 = (c - count1);
        if (ex < 0 && ex2 < 0) {
            cout << abs(ex) + abs(ex2) << endl;
        } else if (ex2 > 0 && ex > 0) {
            cout << 0;
        } else {
            cout << abs(ex) << endl;
        }
    }

    return 0;
}