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

    int t;  // number of test cases
    cin >> t;

    while (t--) {
        int a;  // array size
        ll b;   // number of operations (k)
        cin >> a >> b;

        vector<ll> v(a);
        for (int i = 0; i < a; i++) {
            cin >> v[i];
        }

        ll beauty = 0;

        // Step 1: Initial beauty
        for (int i = 0; i < a; i++) {
            beauty += __builtin_popcountll(v[i]);
        }

        // Step 2: Try to increase beauty by converting even → odd
        for (int i = 0; i < a && b > 0; i++) {
            if (v[i] % 2 == 0) {
                ll old_beauty = __builtin_popcountll(v[i]);
                v[i] += 1;
                ll new_beauty = __builtin_popcountll(v[i]);
                beauty += (new_beauty - old_beauty);  // increase only if beauty increased
                b -= 1;
            }
        }

        // Step 3 (optional): if operations remain, just increment randomly (though not optimal)
        int idx = 0;
        while (b > 0) {
            ll old_beauty = __builtin_popcountll(v[idx]);
            v[idx] += 1;
            ll new_beauty = __builtin_popcountll(v[idx]);
            beauty += (new_beauty - old_beauty);
            b--;
            idx = (idx + 1) % a;
        }

        cout << beauty << endl;
    }

    return 0;
}
