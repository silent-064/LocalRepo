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
vector<ll>x(b);
string s1;
cin>>s1;
ll cnt=0;
i=0;
ll v=-10;
for(auto it:s1)
{
if (it == '1') {
    if(i-v>=c)
    {
        cnt++;
    }
    v=i;
    // ll l = min((ll)i, c - 1);
    // ll r = max((ll)i, c - 1);

    // char mn = *min_element(s1.begin() + l, s1.begin() + r + 1);
    // if (mn == '1') cnt++;
}

i++;
    }
    cout<<cnt<<endl;
}
}