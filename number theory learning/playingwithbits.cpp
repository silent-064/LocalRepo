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
void printBinary(int num) {
    for (int i = 10; i >= 0; i--) {
        cout << ((num >> i) & 1);
    }
    cout << endl;
}
int main() {
    ios_base::sync_with_stdio(false);  // 1001
    cin.tie(NULL);
    cout.tie(NULL);
    printBinary(9);
    int a = 9;
    int i = 3;
    if ((a & (1 << i)) != 0)
        cout << "set bit" << endl;
    else
        cout << "not set bit" << endl;
    // bit set
    printBinary(a | (1 << 1));
    // unbit set
    printBinary(a & ~((1 << 3)));
    // toggle
    printBinary(a ^ ((1 << 2)));
    // count
    int cnt = 0;
    for (i = 31; i >= 0; i--) {
        if ((a & (1 << i)) != 0) cnt++;
    }
    cout << cnt;
    cout << __builtin_popcount(a) << endl;
}