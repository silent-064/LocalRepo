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
    int a, b, c;
    cin >> a >> b >> c;
    int d;
    d = c % 10;
    if (d == 7 || b==7) {
        cout << 0;

    } else {
        int count = 0;
        
        while (true) {
            c = c - a;
            count++;
            if (c % 10 == 7) {
                cout << count;
            }
        }
    }

    return 0;
}