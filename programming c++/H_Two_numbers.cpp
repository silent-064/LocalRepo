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
    int a, b, i;
    cin >> a >> b;
    int x = floor(a / b);
    int y = ceil(a / b);
    int z = round(a / b);
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
}