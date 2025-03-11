/*
 * Author : Protic Prappo Durjoy
 * Date : 11/3/25
 */
#include<bits/stdc++.h>
using namespace std;
bool isSquare(int l, int r, int d, int u) {
    if ((l * l + u * u) == (r * r + u * u) &&
        (r * r + u * u) == (r * r + d * d) &&
        (r * r + d * d) == (l * l + d * d)) {

     
        if ((r + l) * (r + l) == (d + u) * (d + u)) {
            return true;
        }
    }
    return false;
}
int main()
{
ios::sync_with_stdio(false),cin.tie(0);
int a;
cin>>a;
while(a--)
{
    int l, r, d, u;
    cin >> l >> r >> d >> u;

    if (isSquare(l, r, d, u)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }




}






    return 0;
}
