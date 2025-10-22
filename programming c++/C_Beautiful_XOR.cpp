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
ll b,c;
cin>>b>>c;
if(c>b)cout<<-1<<endl;
else if(b==c)cout<<0<<endl;
else if((b|c)!=c)cout<<-1<<endl;
else {
ll x=b^c;

                cout<<1<<endl;
                cout<<x<<endl;
    // cout<<2<<endl;
    // cout<<b<<" "<<c<<endl;
}




    }
}