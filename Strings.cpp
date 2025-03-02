#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    int s11 = s1.size();
    int s22 = s2.size();

    cout << s11 << " " << s22 << endl; 

    cout << s1 + s2 << endl;

  
    char temp = s1[0];
    s1[0] = s2[0];
    s2[0] = temp;

    cout << s1 << " " << s2 << endl;

    return 0;
}
