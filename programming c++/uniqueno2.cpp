/*
 * Author : Protic Prappo Durjoy
 * Date :
 */
#include <bits/stdc++.h>
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ft float
#define du double
#define ull unsigned long long
#define ll long long
const ll INF = 1e9 + 7;
const ll mod = 998244353;
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, i;
    cin >> a;
    vector<ll>x(a);
   ll result=0;
  for(i=0; i<a; i++)
  {
    cin>>x[i];result=x[i]^result;
  }
ll temp=result;
ll pos=0;
while((temp&1)==0)
{
    pos++;
    temp=temp>>1;
}
ll setA=0,setB=0;
ll mask=(1<<pos);
for(i=0; i<a; i++)
{
    if((x[i] & mask)>0)
    {
        setA=setA^x[i];
    }
    else{
        setB=setB^x[i];
    }
}
cout<<"SET A "<<setA<<endl<<"Set B "<<setB<<endl;
}