#include<bits\stdc++.h>
using namespace std;
void digits(int a)
{int sumofdigits=0;
    while(a>0)
   {
int y;
    y=a%10;
    a=a/10;
    sumofdigits+=y;
 } 
cout<<sumofdigits;


}
int main()
{int b;
    cin>>b;
    string s;
    cin>>s;   //using sto--i(for int value) in next line to convert strings to int;
    int a=stoi(s);
    digits(a);








    return 0;
}