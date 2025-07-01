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
        int b;
        cin >> b;
        char ch[b + 1];
        int cnt = 0;
        for (i = 0; i < b; i++) {
            cin >> ch[i];
            if (ch[i] == 'U') cnt++;
        }
        if (cnt % 2 != 0)
            yes;
        else
            no;
    }
}