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
ll check(string s,char ch)
{ll i;
    vector<ll>pos;
    for(i=0; i<s.size(); i++)
    {
        if(s[i]==ch)pos.push_back(i);
    }
    if(pos.empty())return 0;
    vector<ll>shift;
    for(i=0; i<pos.size(); i++)
    {
        shift.push_back(pos[i]-i);
    }
    ll mid=shift[shift.size()/2];
    ll ans=0;
    for(auto it:shift)
    {
        ans+=abs(it-mid);
    }
    return ans;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, i;
    cin >> a;
    while (a--)
    {
ll b;
cin>>b;
string s;
cin>>s;
cout<<min(check(s,'a'),check(s,'b'))<<endl;




    }
}