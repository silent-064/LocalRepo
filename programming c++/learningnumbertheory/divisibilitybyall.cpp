#include <bits/stdc++.h>
using namespace std;
using int64 = long long;

int64 gcd_ll(int64 a, int64 b){ return b==0 ? a : gcd_ll(b, a%b); }

int main(){
    vector<int64> arr = {2,3,5};
    int64 L = 1;
    for(int64 v : arr){
        int64 g = gcd_ll(L, v);
        L = (L / g) * v; // beware of overflow in general
        if(L > (int64)1e18) { // overflow guard for practical purposes
            cout << "LCM too large\n";
            return 0;
        }
    }
    cout << "LCM = " << L << "\n";
    // Example check
    int64 x = 30;
    if(x % L == 0) cout << x << " is divisible by all elements\n";
    else cout << x << " is NOT divisible by all elements\n";
}