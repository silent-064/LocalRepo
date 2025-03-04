#include<bits\stdc++.h>
using namespace std;
int main()
{
int a,b;
cin>>a>>b;
int * p,*q;
p=&a;
q=&b;
int sum=*p+*q;
int sub=abs(*p-*q);
cout<<sum<<endl<<sub;




    return 0;
}