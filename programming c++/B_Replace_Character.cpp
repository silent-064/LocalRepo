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
        int n;
        cin >> n;
        string s;
        cin >> s;

        map<char, int> occ;
        for (char ch : s) {
            occ[ch]++;
        }

        int low_index = 0, high_index = 0;
        char low_char = s[0], high_char = s[0];
        int low_freq = occ[s[0]], high_freq = occ[s[0]];

        for (int i = 1; i < n; i++) {
            char ch = s[i];
            int freq = occ[ch];

            if (freq < low_freq || (freq == low_freq && ch < low_char)) {
                low_freq = freq;
                low_char = ch;
                low_index = i;
            }

            if (freq > high_freq || (freq == high_freq && ch > high_char)) {
                high_freq = freq;
                high_char = ch;
                high_index = i;
            }
        }

        s[low_index] = s[high_index];
        cout << s << endl;
    }
    return 0;
}
