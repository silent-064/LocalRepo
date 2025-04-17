/*
 * Author : Protic Prappo Durjoy
 * Date :17/4/25
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
    int a, i, b;
    cin >> a >> b;
    char ch[a + 1];
    for (i = 1; i <= a; i++) {
        cin >> ch[i];
    }
    if (a - b < b - 1) {
        int x = b;
        while (x != a) {
            cout << "RIGHT" << endl;
            x++;
        }
        cout << "PRINT" << " " << ch[x] << endl;
        for (i = x - 1; i >= 1; i--) {
            cout << "LEFT" << endl << "PRINT" << " " << ch[i] << endl;
        }

    } else {
        int n = b;
        while (n != 1) {
            cout << "LEFT" << endl;
            n--;
        }
        cout << "PRINT " << ch[1] << endl;
        for (i = 2; i <= a; i++) {
            cout << "RIGHT" << endl << "PRINT " << ch[i] << endl;
        }
    }
    return 0;
}