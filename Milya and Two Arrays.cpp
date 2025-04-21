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
#define ull unsigned long long
using namespace std;
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a;
    cin >> a;
    while (a--) {
        int b;
        cin >> b;

        set<int> s1, s2;

        for (int i = 1; i <= b; i++) {
            int x;
            cin >> x;
            s1.insert(x);
        }

        for (int i = 1; i <= b; i++) {
            int y;
            cin >> y;
            s2.insert(y);
        }

        if (s1.size() + s2.size() < 4) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }

    return 0;
}
