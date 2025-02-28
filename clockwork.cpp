#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; // Number of test cases

    while (T--) {
        int n;
        cin >> n;
        bool possible = false;

        for (int i = 0; i < n; i++) {
            int t;
            cin >> t;
            
            // Checking if the condition is met
            if (t <= i * 2 || t <= (n - i - 1) * 2) {
                possible = true;
            }
        }

        cout << (possible ? "NO\n" : "YES\n");
    }
    
    return 0;
}
