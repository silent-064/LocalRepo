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
void solve(){
string s1;
ll i;
cin>>s1;
ll cnt0=0,cnt1=0;
for(char &it:s1)
{
if(it=='0')cnt0++;
else cnt1++;
}
for(i=0; i<s1.size(); i++)
{
    if(s1[i]=='1')cnt0--;
    else cnt1--;
    if(cnt1<0 || cnt0<0)
    {
        cout<<s1.size()-i<<endl;
        return;
    }
}
cout<<0<<endl;

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
solve();




    }
}