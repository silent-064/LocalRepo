/*
 * Author : Protic Prappo Durjoy
 * Date : 18/3/25
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false),cin.tie(0);
int a;
cin>>a;
while(a--)
{
    int x, y, n;
    cin >> x >> y >> n;
    if (n - n % x + y <= n) {
        cout << n - n % x + y << endl;
    } else {
        cout << n - n % x - (x - y) << endl;
    }




}






    return 0;
}