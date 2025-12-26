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
string s1,newu;
cin>>s1;
ll g=0,l=0,s=0;
for(char ch:s1){
    if(ch=='>')g++;
    else if(ch=='<')l++;
    else s++;
}
newu=string(l,'<') + string(s,'*') + string(g,'>');
// cout<<newu<<endl;
if(s>1 || newu!=s1){
cout<<-1<<endl;
}
else{
    cout<<max(g+s,l+s)<<endl;
}


     }
 }