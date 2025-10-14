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
void solve()
{
    ll b,i;
    cin>>b;
    vector<ll>x(b);
    for(i=0; i<b; i++)
    {
        cin>>x[i];
    }
    vector<ll>y(b);
    vector<ll>gap(b);
    gap[0]=x[0];
    for(i=1;i<b;i++)
    {
        gap[i]=x[i]-x[i-1];
        // //ll diff=x[i]-x[i-1];
        // if(x[i]>x[i-1]){cnt++;
        //     y[i]=cnt;
        //    // y[i]=freq.size()+1;
        //     freq[y[i]]++;
        // }
        // //if(diff<=1)y[i]=y[i-1];
        // else{
        //      y[i]=y[i-1];
        //     freq[y[i]]++;

    }
    map<ll,ll>pre,m;
    ll cnt=1;
    for(i=0;i<b;i++)
    {
        ll diff=(i+1)-gap[i];
        if(m.count(diff))
        {
            ll val=m[diff];
            y[i]=val;
            pre[val]=i+1;
            m[i+1]=val;
        }
        else
        {
            y[i]=cnt;
            pre[cnt]=i+1;
            m[i+1]=cnt;
            cnt++;
        }
    }
    for(i=0; i<b; i++)
    {
        cout<<y[i]<<" ";
    }
    cout<<endl;
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

        solve();





    }
}
