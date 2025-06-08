/*
 * Author : Protic Prappo Durjoy
 * Date :7/6/25
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
    int count = 0;
    map<int, int> m1;
    for (i = 0; i < a; i++) {
        int x;
        cin >> x;
        if (m1.find(x) == m1.end()) {
            count++;
        }
        m1[x]++;
    }
    cout << count;
}