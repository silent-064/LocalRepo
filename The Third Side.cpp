/*
 * Author : Protic Prappo Durjoy
 * Date :21/3/25 
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,i;
cin>>a;
while(a--)
{int b,x,y=0;
    cin>>b;
   
for(i=0; i<b; i++ )
{ 
    cin>>x;
    y+=x;
    y=y-1;
}

if(b==1)
{
    cout<<x<<endl;
}
else
cout<<y+1<<endl;
}

return 0;


}






    
