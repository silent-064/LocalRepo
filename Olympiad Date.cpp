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
#define ull unsigned long long
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, i;
    cin >> a;
    int ch[10] = {'0'};
    while (a--) {
        int b;
        cin >> b;
        vector<int> x(b);
        for (i = 0; i < b; i++) {
            cin >> x[i];
        }
        int fl = 0;
        int res = 0;
        for (int i = 0; i < b; i++) {
            ch[x[i]]++;
            if (ch[0] >= 3 && ch[1] >= 1 && ch[2] >= 2 && ch[3] >= 1 && ch[5] >= 1 && !fl) {
                fl = 1;
                res = i + 1;
            }
        }
        cout << res << endl;
    }

    return 0;
}