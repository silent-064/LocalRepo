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
    while (a--)
    {
ll b;
cin>>b;
ll z=(b*(b-1))/2;
vector<ll>x(z);
set<ll>y;
for(i=0; i<z; i++){
    cin>>x[i];
    y.insert(x[i]);
}
//ll maxu=(*max_element(x.begin(),x.end()))+1;
ll need=b-1;ll j=0;
//vector<ll>v(y.begin(),y.end());
sort(x.begin(),x.end());
while(need>0)
{
    cout<<x[j]<<" ";
    j+=need;
    need--;
}
cout<<1000000000<<endl;




    }
}