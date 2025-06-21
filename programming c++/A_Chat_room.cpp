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
    vector<char> a = {'h', 'e', 'l', 'l', 'o'};
    string ch;
    cin >> ch;

    int i = 0;
    int j = 0;

    while (i < ch.size() && j < 5) {
        if (ch[i] == a[j]) {
            j++;
        }
        i++;
    }

    if (j == 5)
        yes;
    else
        no;

    return 0;
}