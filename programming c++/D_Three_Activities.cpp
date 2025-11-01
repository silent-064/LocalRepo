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
vector<pair<ll,ll>>x,y,z;
for(i=0; i<b; i++)
{ll c;
    cin>>c;
    x.push_back(make_pair(c,i));
}
for(i=0; i<b; i++)
{ll d;

    cin>>d;
    y.push_back(make_pair(d,i));
}
for(i=0; i<b; i++)
{ll e;
    cin>>e;
    z.push_back(make_pair(e,i));
}
sort(x.rbegin(),x.rend());
sort(y.rbegin(),y.rend());
sort(z.rbegin(),z.rend());
vector<ll>ans;
ll sum=INT_MIN;
ll j,k;
for(i=0; i<3; i++)
{
    for(j=0; j<3; j++)
    {
        for(k=0; k<3; k++)
        {
if(x[i].second!=y[j].second && y[j].second!=z[k].second && z[k].second!=x[i].second)
{
    sum=max(sum,x[i].first+y[j].first+z[k].first);
}
        }
    }
}
// for(i=0; i<b; i++)
// {
//   ans.push_back(x[i]);
//     ans.push_back(y[i]);
//       ans.push_back(z[i]);
//       ll maxu=*max_element(ans.begin(),ans.end());
//       sum+=maxu;
//       maxu=0;
//       ans.clear();
// }
cout<<sum<<endl;





    }
}