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

    int a, i, s[2];
    cin >> a;
    while (a--) {
        int b, cnt = 0, acnt = 0;
        cin >> b;

        string s1, s2;
        cin >> s1 >> s2;
        s[0] = s[1] = 0;
        for (int i = 0; i < b; i++) {
            int x = i % 2;
            if (s1[i] == '0') s[x]++;
            if (s2[i] == '0') s[!x]++;
        }

        if (s[0] < (b + 1) / 2 || s[1] < b / 2)
            no;
        else
            yes;
    }
    return 0;
}
