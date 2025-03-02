#include<bits\stdc++.h>
using namespace std;
int main()
{
string s;
cin>>s;
int freq[26]={0};
for(char c : s)
{
    freq[c-'a']++;
}
for(char c='a'; c<='z'; c++)
{
    if(freq[c-'a']>0)
    {
        cout<<c<<" : "<<freq[c-'a']<<endl;
    }
}
return 0;
}