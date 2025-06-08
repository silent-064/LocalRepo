/*
 * Author : Protic Prappo Durjoy
 * Date :7/6/25
 * cses pblm
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
    int a, b, c, i;
    vector<int> appl;
    vector<int> apt;
    cin >> a >> b >> c;  // 45 60 60 80
    for (i = 0; i < a; i++) {
        int x;
        cin >> x;
        appl.push_back(x);
    }
    sort(appl.begin(), appl.end());
    for (i = 0; i < b; i++) {
        int y;
        cin >> y;
        apt.push_back(y);
    }
    sort(apt.begin(), apt.end());
    int a1 = 0, a2 = 0, cnt = 0;
    while (a1 < a && a2 < b) {
        if (abs(appl[a1] - apt[a2]) <= c) {
            a1++;
            a2++;
            cnt++;
        } else if (apt[a2] < appl[a1] - c) {
            a2++;
        } else {
            a1++;
        }
    }
    cout << cnt << endl;
}