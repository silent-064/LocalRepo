/*
 * Author : Protic Prappo Durjoy
 * Date :14/625
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
    string s2;
    cin >> s2;

    char temp = s2[0];
    int count = 0;
    int maxu = INT_MIN;
    for (i = 0; i < s2.size(); i++) {
        if (s2[i] == temp) {
            count++;
        }
        if (s2[i] != temp) {
            count = 1;
            temp = s2[i];
        }
        maxu = max(maxu, count);
    }
    cout << maxu;
}