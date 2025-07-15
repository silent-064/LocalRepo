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

    string a;
    cin >> a;

    if (a.length() == 0) {
        return 0;  // Empty input
    }

    if (a.length() == 1) {
        // শুধু একটা অক্ষর হলে toggle করেই প্রিন্ট করো
        if (islower(a[0])) {
            a[0] = toupper(a[0]);
        } else {
            a[0] = tolower(a[0]);
        }
        cout << a << endl;
    } else {
        // দুই বা ততোধিক অক্ষর থাকলে
        bool allUpper = true;
        for (int i = 1; i < a.size(); i++) {
            if (islower(a[i])) {
                allUpper = false;
                break;
            }
        }

        if (islower(a[0]) && allUpper) {
            // যেমন: cAPS → Caps
            a[0] = toupper(a[0]);
            for (int i = 1; i < a.size(); i++) {
                a[i] = tolower(a[i]);
            }
            cout << a << endl;
        } else if (isupper(a[0]) && allUpper) {
            // যেমন: CAPS → caps
            for (int i = 0; i < a.size(); i++) {
                a[i] = tolower(a[i]);
            }
            cout << a << endl;
        } else {
            // অন্য যেকোনো কেসে 그대로 রাখো
            cout << a << endl;
        }
    }

    return 0;
}
