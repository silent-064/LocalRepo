/*
 * Author : Protic Prappo Durjoy
 * Date : 21/3/25
 */
#include<bits/stdc++.h>
#define endl "\n";
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define ft float
#define du double
#define ull unsigned long long
using namespace std;
int main()
{
int a,i;
cin>>a;
while(a--)
{
int b;
cin>>b;
int count=0;
string s1;
cin>>s1;
for(i=0; i<b-1; i++)
{

if(s1[i]!=s1[i+1])count++;

}
if(s1[0]=='1')count++;
cout<<count<<endl;




}






    return 0;
}