#include <bits/stdc++.h>
using namespace std;

// ====== উপরের সব ফাংশন এখানে কপি করুন ======
int binary_search_exact(vector<int> &a, int x) {
    int l = 0, r = a.size() - 1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (a[mid] == x) return mid;
        else if (a[mid] < x) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}

int lower_bound_bs(vector<int> &a, int x) {
    int l = 0, r = a.size();
    while (l < r) {
        int mid = (l + r) / 2;
        if (a[mid] < x) l = mid + 1;
        else r = mid;
    }
    return l;
}

int upper_bound_bs(vector<int> &a, int x) {
    int l = 0, r = a.size();
    while (l < r) {
        int mid = (l + r) / 2;
        if (a[mid] <= x) l = mid + 1;
        else r = mid;
    }
    return l;
}

// demo ok() for BS on answer
bool ok(long long mid) {
    return (mid >= 10); // mid ≥ 10 হলে true
}

long long bs_answer(long long lo, long long hi) {
    while (lo < hi) {
        long long mid = (lo + hi) / 2;
        if (ok(mid)) hi = mid;
        else lo = mid + 1;
    }
    return lo;
}

int main() {
    vector<int> a = {1, 3, 3, 5, 7, 9};

    cout << "Exact(5) -> " << binary_search_exact(a, 5) << "\n";
    cout << "LowerBound(3) -> " << lower_bound_bs(a, 3) << "\n";
    cout << "UpperBound(3) -> " << upper_bound_bs(a, 3) << "\n";

    cout << "Binary Search on Answer (>=10): "
         << bs_answer(1, 100) << "\n";

    return 0;
}
