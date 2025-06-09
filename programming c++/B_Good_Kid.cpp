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
        vector<int> store(b);
        ll maxiu = 0;

        for (i = 0; i < b; i++) {
            cin >> store[i];
        }

        for (i = 0; i < b; i++) {
            vector<int> temp = store;
            temp[i] += 1;

            ll mul = 1;
            for (int j = 0; j < b; j++) {
                mul *= temp[j];
            }

            maxiu = max(maxiu, mul);
        }

        cout << maxiu << endl;
    }
}
