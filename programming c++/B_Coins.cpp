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

    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    if (s1[1] == '<') swap(s1[0], s1[2]);
    if (s2[1] == '<') swap(s2[0], s2[2]);
    if (s3[1] == '<') swap(s3[0], s3[2]);

    if (s1[0] == s2[0])
        cout << s3[2] << s3[0] << s1[0];
    else if (s2[0] == s3[0])
        cout << s1[2] << s1[0] << s2[0];
    else if (s1[0] == s3[0])
        cout << s2[2] << s2[0] << s1[0];
    else
        cout << "Impossible";

    return 0;
}