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
string s1;
cin>>s1;
bool ans=false;
for(i=0; i<s1.size()-1; i++){
    if(s1[i]==s1[i+1])
    {
        ans=true;
        break;
    }
}
if(ans)cout<<1<<endl;
else cout<<s1.size()<<endl;



    }
}