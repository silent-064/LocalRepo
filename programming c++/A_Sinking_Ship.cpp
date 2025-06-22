/*
 * Author : Protic Prappo Durjoy
 * Date :21/6/25
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
    int x = a;
    string s1[a], s2[a];
    for (i = 0; i < a; i++) {
        cin >> s1[i] >> s2[i];
    }
    for (i = 0; i < a; i++) {
        if (s2[i] == "rat") {
            cout << s1[i] << endl;
        }
    }
    for (i = 0; i < a; i++) {
        if (s2[i] == "child" || s2[i] == "woman") {
            cout << s1[i] << endl;
        }
    }
    for (i = 0; i < a; i++) {
        if (s2[i] == "man") {
            cout << s1[i] << endl;
        }
    }
    for (i = 0; i < a; i++) {
        if (s2[i] == "captain") {
            cout << s1[i] << endl;
        }
    }
}
