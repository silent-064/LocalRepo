/*
 * Author : Protic Prappo Durjoy
 * Date :21/4/25
 * some logic idea chat gpt theke newaa hoisee
 */
#include <bits/stdc++.h>
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ft float
#define du double
#define ull unsigned long long
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, i;
    cin >> a;
    while (a--) {
        int b, i;
        cin >> b;
        string dh;
        cin >> dh;

        ull x = 0, y = 0, z = 0;
        char freq = '0';
        for (i = 0; i < b; i++) {
            char ch = dh[i];  // jodi soman na hosse taile ami blockbodol korte hbe and seta ami
                              // count kore rakhbo
            if (ch != freq) {
                x++;
                if (freq == '0')
                    y++;
                else
                    z++;
            }
            freq = ch;
        }

        int found;
        if (y >= 2 || z >= 2)
            found = 2;
        else if (x >= 2)
            found = 1;
        else
            found = 0;

        cout << b + (x - found) << endl;
    }

    return 0;
}