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
const ll maxu=1e9;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, i;
    vector<ll>ugly_num;
ll p2=1;
    for(i=0; p2<=maxu; i++,p2*=2){//p2=2^i;
   ll p3=1;
    for(i=0; p2*p3<=maxu; i++,p3*=3)
    {//p3=3^i
    ll p5=1;
    for(i=0; p2*p3*p5<=maxu; i++,p5*=5){
      ugly_num.push_back(p2*p3*p5);
    }
}
}
sort(ugly_num.begin(),ugly_num.end());
//cout<<ugly_num.size()<<endl;
cout<<"The 1500'th ugly number is "<<ugly_num[1500-1]<<"."<<endl;
    //p5=5^i;
    //cin >> a;
    // while (a--)
    // {





    // }
}