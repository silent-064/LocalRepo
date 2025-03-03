#include<bits\stdc++.h>
using namespace std;
int main()
{
string s;
cin>>s;
string target="EGYPT";
string replacement=" ";
size_t position= s.find(target);
while(position!=string::npos)
{
    s.replace(position,target.length(),replacement);
    position=s.find(target,position+1);
}
cout<<s;





return 0;
}