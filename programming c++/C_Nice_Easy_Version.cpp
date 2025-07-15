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
    string sh;
    while (a--) {
        cin >> sh;
        ll num = stoll(sh);
        for (char &ch : sh) {
            if (ch == '6' || ch == '9')
                continue;
            else if (ch >= '0' && ch < '6') {
                ch = '6';
            } else if (ch >= '7' && ch < '9') {
                ch = '9';
            }
        }
        cout << sh << endl;
    }
}