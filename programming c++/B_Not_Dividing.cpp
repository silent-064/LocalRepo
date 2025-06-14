/*
 * Author : Protic Prappo Durjoy
 * Date :13/6/25
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
    for (i = 0; i < a; i++) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            if (a[i] == 1) {
                a[i]++;
            }
        }
        for (int i = 1; i < n; i++) {
            if (a[i] % a[i - 1] == 0) {
                a[i]++;
            }
        }
        for (auto it : a) {
            cout << it << " ";
        }
        cout << endl;
    }
}