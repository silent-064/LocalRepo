#include<bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    while (a--) {
        string s1, s2;
        cin >> s1 >> s2;
        
        int len = s1.size();
        int len2 = s2.size();
        int maxLen = max(len, len2); 

        for (int i = 0; i < maxLen; i++) {
            if (i < len) cout << s1[i];  
            if (i < len2) cout << s2[i]; 
        }

        cout << endl;
    }
    return 0;
}
