/*
 * Author : Protic Prappo Durjoy
 * Date : 3/9/25
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
int a;
cin>>a;
while(a--)
{
long long b,c,d,ans,ans1;
cin>>b>>c>>d;
ans=(c/d)+(c%d);
ans1=(c/d)*d-1;
if(ans1>=b)
{
ans=max(ans,((ans1/d)+(ans1%d)));
}
cout<<ans<<endl;
}
   return 0;
}