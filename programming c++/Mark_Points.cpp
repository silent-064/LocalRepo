#include <bits/stdc++.h>
using namespace std;

bool possible(string S) {
    int N = S.size();
    int i = 0;
    while (i < N) {
        if (S[i] == '1') {
            int j = i;
            while (j < N && S[j] == '1') j++;
            int len = j - i;
            if (len < 3) return false;
            i = j;
        } else {
            i++;
        }
    }
    return true;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        string S;
        cin >> S;
        cout << (possible(S) ? "Yes" : "No") << "\n";
    }
}
