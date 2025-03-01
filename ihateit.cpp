#include<bits\stdc++.h>
using namespace std;
int main()
{
int a,i;
cin>>a;
string s1="I hate ";
string s2="it";
string s3="I love ";
string s4="that ";
for(i=1; i<=a; i++)
{
    if(i%2!=0)
    {
     cout<<s1;
     if(i==a)
     {
        cout<< s2;  
     }
     else
     {
        cout<< s4;
     }
    }
    else
    {
        cout<<s3;
        if(i==a)
        {
           cout<< s2;  
        }
        else
        {
           cout<< s4;
        } 
    }

}



    return 0;
}