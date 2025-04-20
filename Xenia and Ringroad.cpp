/*
 * Author : Protic Prappo Durjoy
 * Date :20/4/25
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
    long long a, b, c, i, place, sum;
    cin >> a >> b;
    place = 1;
    sum = 0;
    for (i = 0; i < b; i++) {
        cin >> c;
        if (place <= c) {
            sum += c - place;
        } else {
            sum += a - place + c;
        }
        place = c;
    }
    cout << sum << endl;

    return 0;
}
