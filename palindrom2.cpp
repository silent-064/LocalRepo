#include<bits\stdc++.h>
using namespace std;
void ispalindrom(string s)
{
    int st=0; int end=s.length()-1;
    int value=true;
    while(st<end)
    {
        if(!isalnum(s[st]))
        {
            st++;continue;
        }
        if(!isalnum(s[end]))
        {
            end--;continue;
        }
        if(tolower(s[st])!=tolower(s[end]))
        {
            value= false;
        }
        st++;end--;
    }
if(value)
{
    cout<<"YES";
}
else cout<<"NO";
}




int main()
{
string s;
cin>>s;
ispalindrom(s);





    return 0;
}