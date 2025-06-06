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
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, i;
    // cin >> a;
    //     stack<int>b;
    //     b.push(2);
    //     b.push(3);
    //     b.push(4);
    //     b.push(5);
    // while(!b.empty())
    // {
    //     cout<<b.top()<<endl;
    //     b.pop();
    // }
    queue<string> s1;
    s1.push("abc");
    s1.push("abh");
    s1.push("efg");
    s1.push("fvg");
    s1.push("avc");
    while (!s1.empty()) {
        cout << s1.front() << endl;
        s1.pop();
    }
    return 0;
}