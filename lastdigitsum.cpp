#include<bits\stdc++.h>
using namespace std;
int digits()
{
    int a,sumofdigits=0;
    cin>>a;
    while(a>0)
    {
     int lastdigit=a%10;
     a=a/10;
     sumofdigits+=lastdigit;
    }
    return sumofdigits;
}

int main()
{
cout<<digits()<<endl;

    return 0;
}