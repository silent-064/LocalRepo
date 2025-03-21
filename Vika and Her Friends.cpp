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
int a;
cin>>a;
while(a--)
{
int b,i,c,d,x,y;
cin>>b>>c>>d;
cin>>x>>y;
int x1,y1;
int count=0;
for(i=0; i<d; i++)
{
    cin>>x1>>y1;
    if(((x1+y1)%2==0 && (x+y)%2==0) ||((x1+y1)%2!=0 && (x+y)%2!=0))
    {
        count++;
        
    }
}
if(count>0)
{
    no;
}
else yes;


}






    return 0;
}