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
ll b;
cin>>b;
string s1;
cin>>s1;
set<char>ch;
ll cnt=0;
for(i=0; i<s1.size(); i++)
{
    ch.insert(s1[i]);
    cnt+=ch.size();

}
cout<<cnt<<endl;



    }
}