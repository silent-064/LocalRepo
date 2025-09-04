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
       //char ch[] = {'1','2','3','4','5','6','7','8','9','0','-','=', 'q','w','e','r','t','y','u','i','o','p','[',']','\\','a','s','d','f','g','h','j','k','l',';','\'','z','x','c','v','b','n','m',',','.','/'};
      string sh;
      char ch;
       cin>>ch>>sh;
 string s1="qwertyuiopasdfghjkl;zxcvbnm,./";
 string s2="";
 ll m=0;
 if(ch=='R'){
m=-1;
}
else{
m=1;
}
for(i=0; i<sh.size(); i++)
{
    s2+=s1[s1.find(sh[i])+m];
}
cout<<s2;
 }
