/*
 * Author : Protic Prappo Durjoy
 * Date : 22/3/25
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
int b,c;
cin>>b;
int count=0,even=0,odd=0;
for(i=0; i<b; i++)
{
cin>>c;
if(b==1 && c%2!=0)
{
    count=0;
}
else if(c%2==0)
{
    count=1;
    even++;
}
else if(c%2!=0)odd++;
}
int now=count+odd;
if(odd==b)
{
    cout<<now-1<<endl;
}
else
cout<<now<<endl;



}






    return 0;
}