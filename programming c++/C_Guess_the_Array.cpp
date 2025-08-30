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
#define ll long long
const ll INF = 1e9 + 7;
const ll mod = 998244353;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, i;
    cin >> a;

    ll sum1, sum2, sum3;
    vector<ll> arr(a); 

  
    cout << "? 1 2" << endl;
    cout.flush();
    cin >> sum1;

    cout << "? 2 3" << endl;
    cout.flush();
    cin >> sum2;

    cout << "? 1 3" << endl;
    cout.flush();
    cin >> sum3;

    ll ans = (sum1 + sum2 + sum3) / 2;
    arr[0] = ans - sum2; 
    arr[1] = ans - sum3; 
    arr[2] = ans - sum1; 

    for (i = 3; i < a; i++)
    {
        cout << "? 1 " << i + 1 << endl;
        cout.flush();
        ll y;
        cin >> y;
        arr[i] = y - arr[0];
    }


    cout << "! ";
    for (i = 0; i < a; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;

    return 0;
}
