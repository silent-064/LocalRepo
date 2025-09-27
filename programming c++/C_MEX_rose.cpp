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
ll n,k,cnt=0;
cin>>n>>k;
vector<ll>x(n);
map<ll,ll>freq;
for(i=0; i<n; i++)
{
    cin>>x[i];
    // if(x[i]==k)
    // cnt++
    freq[x[i]]++;
}
for(i=0; i<k; i++)
{
    if(freq.count(i)==0)cnt++;
}
ll maxu=0;
maxu=max(freq[k],cnt);
cout<<maxu<<endl;





    }
}