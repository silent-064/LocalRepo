/*
 * Author : Protic Prappo Durjoy
 * Date :
 */
#include <bits/stdc++.h>
//#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ft float
#define du double
#define ull unsigned long long
#define ll long long
const ll INF = 1e9 + 7;
const ll mod = 998244353;
using namespace std;
string query(ll mid){
cout<<mid<<endl;
cout.flush();
string s;
cin>>s;
return s;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, i;
    cin >> a;
    while (a--)
    {
ll low=1,maxu=1e6,ans;
while(low<=maxu)
{
    ll mid=low+(maxu-low)/2;
    if(query(mid)=="<")
    {maxu=mid-1;}
    else{
        ans=mid;
        low=mid+1;
    }
}
cout<<"! "<<ans<<endl;
cout.flush();




    }
}