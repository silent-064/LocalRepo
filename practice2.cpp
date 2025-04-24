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
#define ull unsigned long long
using namespace std;
void solve()
{
    int x;
    string su;
    cin >> x >> su;

          int C = count(su.begin(), su.end(), '1');

    int xx = (x - C);
    int y = C * (x - 1) + xx;

    cout << y << endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a;
    cin >> a;

    while (a--) {
       
    }

    return 0;
}
