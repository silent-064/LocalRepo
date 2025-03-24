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
   int b,c,d;
   cin>>b>>c>>d;
   for(i=b; i>=d; i--)
   {
    cout<<i<<" ";
   }
   for(i=d-1; i>c; i-- )
   {
    cout<<i<<" ";
   }
   for(i=1; i<=c; i++)
   {
    cout<<i<<" ";
   }
   
cout<<endl;

}






    return 0;
}