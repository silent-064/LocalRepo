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

    int a,i;
    cin >> a;
    string s1;
    cin >> s1;

    string cng = s1;
    string s2 = "";
    string s3 = "";
ll pos;
  
    for (i = a - 1; i >= 0; i--)
    {
        pos = s2.size() / 2;
        s2.insert(pos, 1, s1[i]);
    }

 

    cout << s2 << endl;
}
