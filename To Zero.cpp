/*
 * Author : Protic Prappo Durjoy
 * Date : 
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
int b,c;
cin>>b>>c;
int x=c-1;
int ans=0;
if(b%2==0)
{
    ans=(b+x-1)/x;
}
else{
    ans=1;
    int v=b-c;
    if(v>0)ans += (v+ x - 1) / x;
}
cout<<ans<<endl;



}






    return 0;
}