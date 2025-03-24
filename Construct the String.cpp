/*
 * Author : Protic Prappo Durjoy
 * Date : 24/3/25
 */
#include<bits/stdc++.h>
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ft float
#define du double
#define ull unsigned long long
using namespace std;
int main()
{    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
int a,i;
cin>>a;
while(a--)
{
int b,c,d;
cin>>b>>c>>d;
string s1="";
for(i=0; i<d; i++)
{
    s1+='a'+i;
    

}
for(i=d; i<c; i++)
{
    s1+=s1[i-d];
}
while(s1.size()<b)
{
    s1+=s1[s1.size()-c];
}
cout<<s1.substr(0,b)<<endl;

}






    return 0;
}