#include<bits\stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    while(a--)
    {
string s;
cin>>s;
int sizze=s.size();
if(sizze<=10)
{
    cout<<s<<endl;
}
else{
cout<<s[0]<<sizze-2<<s[sizze-1]<<endl;

}




    }







    return 0;
}