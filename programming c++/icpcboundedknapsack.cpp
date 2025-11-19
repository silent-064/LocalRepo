#include<bits/stdc++.h>
using namespace std;

/*
Bounded Knapsack (Monotonic Queue Optimization)
------------------------------------------------
ps[i] = profit of item i
ws[i] = weight of item i
ms[i] = maximum times you can take item i
W     = total allowed weight

dp[i][w] = using first i items, max profit at weight w

Normal bounded knapsack is slow: O(n * W * ms[i])
We optimize using monotonic sliding window to O(n * W)
*/

int boundedKnapsack(vector<int> ps, vector<int> ws, vector<int> ms, int W) {
    int n = ps.size();

    vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));

    for(int i = 0; i < n; i++) {

        // process residue classes: 0...ws[i]-1
        for(int s = 0; s < ws[i]; s++) {

            int alpha = 0;                // will add ps[i] per step
            queue<int> que;               // window of dp values
            deque<int> peek;              // monotonic maximum deque

            for(int w = s; w <= W; w += ws[i]) {

                alpha += ps[i];

                // dp[i][w] - k*ps[i] form rewriting → update a
                int a = dp[i][w] - alpha;

                que.push(a);

                // maintain decreasing deque
                while(!peek.empty() && peek.back() < a)
                    peek.pop_back();
                peek.push_back(a);

                // if window size > ms[i] + 1, pop
                while((int)que.size() > ms[i] + 1) {
                    if(que.front() == peek.front())
                        peek.pop_front();
                    que.pop();
                }

                dp[i+1][w] = peek.front() + alpha;
            }
        }
    }

    // Best answer = maximum dp[n][w] over all w
    int ans = 0;
    for(int w = 0; w <= W; w++)
        ans = max(ans, dp[n][w]);

    return ans;
}

int32_t main() {

    int n = 3, W = 10;

    vector<int> ps = {6, 4, 5};   // profit
    vector<int> ws = {5, 3, 2};   // weight
    vector<int> ms = {1, 2, 3};   // limit

    cout << boundedKnapsack(ps, ws, ms, W) << endl;
    return 0;
}
