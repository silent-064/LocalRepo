/*
 * Author : Protic Prappo Durjoy
 * Date : 13/3/25
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false),cin.tie(0);
int b,c,count=0;
cin>>b>>c;
int max_num=max(b,c);
for(int i=max_num; i<=6; i++)
{
    count++;
}
if(count==0)cout<<"0/1";
else if(count==1)cout<<"1/6";
else if(count==2)cout<<"1/3";
else if(count==3)cout<<"1/2";
else if(count==4)cout<<"2/3";
else if(count==5)cout<<"5/6";
else if(count==6)cout<<"1/1";







    return 0;
}