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
    int a,b, i;
    cin >> a>>b;
    vector<ll>x(a);
    for(i=0; i<a; i++)
    {ll y;
        cin>>y;
        x[i]=y;
    }
    sort(x.begin(),x.end());
    ll sum=0;
    for(i=0; x[i]<=0 && i<b; i++)
    {
        sum+=abs(x[i]);
    }
    cout<<sum;
}