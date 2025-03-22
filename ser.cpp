/*
 * Author : Protic Prappo Durjoy
 * Date : 
 */
#include<bits/stdc++.h>
#define endl "\n";
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define ft float
#define du double
#define ull unsigned long long
using namespace std;
using namespace std;
int main()
{    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
int a,i;
cin>>a;
while(a--)
{
int b,c;
string s1;
cin>>b>>c>>s1;
string rev=s1;
reverse(rev.begin,rev.end);
if(s1<rev)
{
    yes;
    continue;
}
int count=0;
for(i=0; i<b-1 && count<c i++)
{
    for(int j=i+1 j<b && count<c j++)
    {
        swap(s1[i],s1[j])
        string temp=s1;
        reverse(temp.begin,temp.end);
        if(s1<temp)
        {
            yes;
            count=c+1;
            break;
        }
        swap(s1[i],s1[j]);
    }
}
if(count<=c)
{
    no;
}


}






    return 0;
}