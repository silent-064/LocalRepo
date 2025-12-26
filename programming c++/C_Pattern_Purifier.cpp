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
string s;
cin>>s;
bool ok=true;
stack<char>s1;
for(char it:s){
    if(!s1.empty() && s1.top()==it)s1.pop();
    else s1.push(it);
}
if(s1.empty())yes;
else no;
// string s1="";
// ll cnt=0;
// ll n=s.size();
// while(ok){
//     for(i=0; i<n-1; i++){
// if(s1[i]=s1[i+1]){
//     cnt--;
// }
// else{
// s1+=s1[i];
//     cnt++;
// }
//     }
// }





    }
}