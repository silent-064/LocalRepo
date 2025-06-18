/*
 * Author : Protic Prappo Durjoy
 * Date :17/6/25
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
        int b;
        cin >> b;
        string s1;
        cin >> s1;

        map<char, int> freq;
        for (char c : s1) {
            freq[c]++;
        }

        int x = 0;
        for (i = 1; i <= b - 2; i++) {
            if (freq[s1[i]] >= 2) {
                x++;
                break;
            }
        }

        if (x > 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}
