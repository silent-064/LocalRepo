/*
 * Author : Protic Prappo Durjoy
 * Date : 24/3/25
 */
#include<bits/stdc++.h>
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ft float
#define du double
#define ull unsigned long long
using namespace std;
int main()
{    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
int a,i;
cin>>a;
while(a--)
{
int x=69;
int v;
cin>>v;
if(v&1){
    for(i=0; i<v; ++i)
    {
        cout<<x<<" ";
    } 
}
else{
    cout<<"1 3 ";
    for(i=2; i<v; ++i)
    {
        cout<<"2 ";
    } 
}




}






    return 0;
}