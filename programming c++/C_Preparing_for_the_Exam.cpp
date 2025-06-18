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
        int b, c, d;
        cin >> b >> c >> d;
        vector<int> store(c);
        vector<int> str(d);
        for (i = 0; i < c; i++) {
            cin >> store[i];
        }
        vector<bool> freq(b + 1, false);
        for (i = 0; i < d; i++) {
            cin >> str[i];
            freq[str[i]] = true;
        }
        int n = d;
        for (int i = 0; i < c; i++) {
            if (n == b || (n == b - 1 && !freq[store[i]]))
                cout << 1;
            else
                cout << 0;
        }
        cout << endl;
    }
}