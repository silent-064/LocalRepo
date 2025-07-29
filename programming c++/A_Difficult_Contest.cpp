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

    int a, i;
    cin >> a;
    while (a--) {
        string s;
        cin >> s;
        bool changed = true;
        while (changed) {
            changed = false;
            for (int i = 0; i + 2 < (int)s.size(); i++) {
                if (s[i] == 'F' && s[i + 1] == 'F' && s[i + 2] == 'T') {
                    swap(s[i + 1], s[i + 2]);
                    changed = true;
                    break;
                } else if (s[i] == 'N' && s[i + 1] == 'T' && s[i + 2] == 'T') {
                    swap(s[i], s[i + 1]);
                    changed = true;
                    break;
                }
            }
        }

        cout << s << endl;
    }
}