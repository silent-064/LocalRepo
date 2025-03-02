#include <bits/stdc++.h>
using namespace std;

void lexicographical(string s1, string s2) {
    if (s1 < s2) {
        cout << s1 << endl; 
    } else {
        cout << s2 << endl; 
    }
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    lexicographical(s1, s2);
    return 0;
}
