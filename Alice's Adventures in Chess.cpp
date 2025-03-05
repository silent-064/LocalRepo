#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    
    while (a--) {
        int n, x1, x2;
        cin >> n >> x1 >> x2; 
        
        string s;
        cin >> s;

        int x = 0, y = 0; 
        
        for (int i=0; i< 100; i++) { 
            for (char c : s) {
                if (c == 'N') y++;
                else if (c == 'E') x++;
                else if (c == 'S') y--;
                else x--;

                if (x == x1 && y == x2) { 
                    cout << "YES\n"; 
                    goto next_test_case; 
                }
            }
        }
        
        cout << "NO\n";

    next_test_case:
        continue;
    }

    return 0;
}
