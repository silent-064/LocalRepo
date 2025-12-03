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
string s;
cin>>s;
vector<string>val; val.push_back(s);
for(ll x=1;x<=3;x++){
 
string tmp=s;
for(i=1;i<b-1;i++) 
if(s[i-1]=='1' && s[i+1]=='1') 
{
if(s[i]=='1') tmp[i]='0';
else tmp[i]='1';
}
val.push_back(tmp);
s=tmp;
 
}
 
if(c%2==0) c=min(c,2LL);
else c=min(c,3LL);
 
cout<<val[c]<<endl;
// if(c%2==0)cout<<s<<endl;
// else{
//     string neew="";
//     neew+=s[0];
//     for(i=1; i<b-1; i++){
//         if(s[i-1]=='1' && s[i+1]=='1'){
//             if(s[i]=='0'){
//                 neew+='1';
//                 //s[i]=='1';
//             }
//             else {
//                 neew+='0';
//                 //s[i]=='0';
//             }
//         }
//         else{
//             neew+=s[i];
//         }
//     }
//     neew+=s[b-1];
//     cout<<neew<<endl;

// }




    }
}