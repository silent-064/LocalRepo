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
vector<int> NGE(vector<int> v) {
    vector<int> nge(v.size());
    stack<int> s1;
    int i;
    for (i = 0; i < v.size(); i++) {
        while (s1.empty() && v[i] > s1.top()) {
            nge[st.top] =
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, i;
    cin >> a;
    vector<int> v(a);
    for (i = 0; i < a; i++) {
        cin >> v[i];
    }
    vector<int> nge = NGE(v);
}