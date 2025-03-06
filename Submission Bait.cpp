#include <bits/stdc++.h>
using namespace std;

void freq() {
    int b;
    cin >> b;
    
    int freq[55] = {0}; 

    for (int i = 0; i < b; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }

    for (int i = 1; i <= b; i++) {
        if (freq[i] % 2 == 1) { 
            cout << "YES\n"; 
            return;
        }
    }
    cout << "NO\n"; 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a;
    cin >> a;
    while (a--) {
        freq();
    }
    return 0;
}
