#include<bits\stdc++.h>
using namespace std;
bool ispalindrome(string s)
{
    int st=0; int end=s.length()-1;
    while(st<end)
    {
      if(!isalnum(s[st]))
      {
        st++; continue;
      }
      if(!isalnum(s[end]))
      {
        end--; continue;
      }
      if(tolower(s[st])!=tolower(s[end]))
      {
        return false;
      }
      st++; end--;
    }
return true;

}
int main()
{
string s;
getline(cin,s);
cout<<ispalindrome(s);



    return 0;
}