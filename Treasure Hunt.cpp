/*
 * Author : Protic Prappo Durjoy
 * Date : 23/3/25
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
{    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
int a,i;
cin>>a;
while(a--)
{
int b,c,d,count=0;
cin>>b>>c>>d;
int math=d/(b+c);
int calc=math*(b+c);
if(calc>=d)
{
    no;
}
else if(calc+b>d)
{
    no;
}
else
{
yes;
}


}
    return 0;
}