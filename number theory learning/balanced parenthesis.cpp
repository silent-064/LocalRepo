/*
 * Author : Protic Prappo Durjoy
 * Date :
 */
#include <bits/stdc++.h>
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ft float
#define du double
#define ll long long
#define ull unsigned long long
using namespace std;
unordered_map<char, int> store = {{'{', -2}, {'[', -3}, {'(', -1}, {'}', 2}, {']', 3}, {')', 1}};
string isbalanced(string s) {
    stack<char> s1;
    for (char it : s) {
        if (store[it] < 0) {
            s1.push(it);
        } else {
            if (s1.empty()) return "NO";
            char top = s1.top();
            s1.pop();
            if (store[top] + store[it] != 0) return "NO";
        }
    }
    if (s1.empty())
        return "YES";
    else
        return "NO";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, i;
    cin >> a;
    while (a--) {
        string s1;
        cin >> s1;
        cout << isbalanced(s1) << endl;
    }
}