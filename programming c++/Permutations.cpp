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
    if (a == 2 || a == 3) {
        cout << "NO SOLUTION";
        return 0;
    }
    for (i = 1; i <= a; i++) {
        if (i % 2 == 0) cout << i << " ";
    }
    for (i = 1; i <= a; i++) {
        if (i % 2 != 0) cout << i << " ";
    }
}