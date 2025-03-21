/*
 * Author : Protic Prappo Durjoy
 * Date : 
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false),cin.tie(0);
pair<int,string>p;
//p=make_pair(2,"abc");
p={2, "abcd"};
pair<int,string> &p1=p;
p1.first=3;
cout<<p.first<<" "<<p.second<<endl;







    return 0;
}