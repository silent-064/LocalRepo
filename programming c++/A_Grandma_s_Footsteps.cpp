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
    int s,b,x,a;
    cin>>s>>a>>b>>x;

    ll i=1;
    ll calc=1;
    ll sum=0;
    while(x>0)
    {
      if(i%2!=0)
      { 
        if(x/a>=0)
        {
calc=s*a;
sum+=calc;
        }
        else{
            calc=x*s;
            sum+=calc;
        }
        
              calc=1;
              x=x-a;
      }
      else{
x=x-b;
      }

    }
cout<<sum<<endl;
}