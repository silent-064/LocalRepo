/*
 * Author : Protic Prappo Durjoy
 * Date : 
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false),cin.tie(0);
vector<int>i={1,3,2,4,5,6,7};
//vector<int>::reverse_iterator it;
for(auto it=i.rbegin(); it!=i.rend(); it++)
{
    cout<<*(it)<<" ";
}
cout<<endl;




    return 0;
}