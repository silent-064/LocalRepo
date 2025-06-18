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
    string s1, s2, s3 = "";
    getline(cin, s1);
    getline(cin, s2);
    map<char, int> s22;
    for (char c : s2) {
        if (c != ' ') s3 += c;
    }
    int cnt = 0;
    for (i = 0; i < s3.size(); i++) {
        char target = s3[i];
        size_t pos = s1.find(target);
        if (pos != string::npos) {
            s1.erase(pos, 1);
            cnt++;
        }
    }
    if (cnt >= s3.size())
        yes;
    else
        no;
}