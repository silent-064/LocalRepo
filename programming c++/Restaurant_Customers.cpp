#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> events;

    for (int i = 0; i < n; i++) {
        int arrival, leaving;
        cin >> arrival >> leaving;

        events.push_back({arrival, 1});

        events.push_back({leaving, -1});
    }

    sort(events.begin(), events.end());

    int curr_customers = 0;
    int max_customers = 0;

    for (auto event : events) {
        curr_customers += event.second;
        max_customers = max(max_customers, curr_customers);
    }

    cout << max_customers << endl;

    return 0;
}
