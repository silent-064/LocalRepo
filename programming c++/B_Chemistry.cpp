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
    while (a--)
    {
        ll b, c, j, y;
        string s;
        cin >> b >> c;
        cin >> s;

        map<char,ll> x;
        for(char ch : s){
            x[ch]++;   
        }

        ll cnt = 0; 
        for(auto it : x){
            if(it.second % 2 != 0) cnt++;
        }

        if(cnt - 1 <= c) yes;
        else no;
    }
}
