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

string ch="";
cin>>b;
string s1;
cin>>s1;
ll c;
cin>>c;
string s2,s3;
cin>>s2;
cin>>s3;
string sh=s1;
for(i=0; i<c; i++){
if(s3[i]=='D'){
sh=sh+s2[i];
}
else{
    sh=s2[i]+sh;
}
}
cout<<sh<<endl;



    }
}