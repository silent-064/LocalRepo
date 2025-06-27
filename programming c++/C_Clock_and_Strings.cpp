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
        int b, c, d, e;
        cin >> b >> c >> d >> e;
        int minu = min(b, c);
        int maxu = max(b, c);
        int minnu = min(d, e);
        int maxxu = max(d, e);
        bool need = false;
        for (i = minu; i <= maxu; i++) {
            if ((i == minnu) && (maxxu > maxu) || (i == maxxu) && (minu > minnu)) {
                yes;
                need = true;
                break;
            }
        }
        if (!need) no;
    }
}