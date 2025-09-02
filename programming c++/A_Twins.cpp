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
    int a, i,j,sum=0;
    cin >> a;
  vector<ll>x(a); 
   vector<ll>y(a);
  for(i=0; i<a; i++)
  {
    cin>>x[i];
    y[i]=x[i];
    sum+=x[i];
  }
  ll cnt=0,sum2=0;
  i=a-1;
  sort(y.begin(),y.end());
  while(sum2<=sum/2){
    sum2+=y[i];
    i--;
  }
cout<<a-1-i<<endl;

}