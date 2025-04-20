/*
 * Author : Protic Prappo Durjoy
 * Date :20/4/25
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
    int a, i;
    cin >> a;
    while (a--) {
        string b1;
        cin >> b1;
        int y = b1.length();
        bool x = false;
        int count = 0;
        for (i = y - 1; i >= 0; i--) {
            if (b1[i] != '0') {
                x = true;
            } else if (x) {
                count++;
            }
        }

        cout << y - (count + 1) << endl;
    }

    return 0;
}