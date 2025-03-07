/*
 * Author : Protic Prappo Durjoy
 * Date : 3/7/25
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false),cin.tie(0);
int a;
cin>>a;
while(a--)
{
int b,c,i;
cin>>b;
bool count=false;
for(i=0; i<b; i++)
{
    cin>>c;
    if(c<=i*2 || c<=(b-i-1)*2)
    {
        count=true;
    }
}
if(count)
{
    cout<<"NO\n";
}
else
cout<<"YES\n";


}






    return 0;
}