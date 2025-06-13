/*
 * Author : Protic Prappo Durjoy
 * Date :10/6/25
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

    int a, b, i;
    cin >> a >> b;
    vector<pair<int, int>> store(a);

    for (i = 0; i < a; i++) {
        cin >> store[i].first;
        store[i].second = i + 1;
    }
    sort(store.begin(), store.end());
    i = 0;
    int j = a - 1;
    int sum;
    while (i < j) {
        sum = store[i].first + store[j].first;
        if (sum == b) {
            cout << store[i].second << " " << store[j].second;
            return 0;
        }
        if (sum < b)
            i++;
        else
            j--;
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}
