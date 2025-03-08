/*
 * Author : Protic Prappo Durjoy
 * Date : 3/8/25
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a;
    cin >> a;

    int mishka = 0, chris = 0;  

    while (a--) {
        int b, c;
        cin >> b >> c;

        if (b > c) {
            mishka++;
        } else if (c > b) {
            chris++;
        }
    }

    if (mishka > chris) {
        cout << "Mishka\n";
    } else if (chris > mishka) {
        cout << "Chris\n";
    } else {
        cout << "Friendship is magic!^^\n";
    }

    return 0;
}
