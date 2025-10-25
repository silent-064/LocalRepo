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
ll b,c;
cin>>b>>c;
vector<ll>x(b);
map<ll,ll>freq;
for (i = 0; i<b; i++)
{
    cin>>x[i];
    freq[x[i]]++;
}
bool ans=false;
ll get=1;
for(i=1; i<=b; i++)
{
   // ll j=i+1;
    if(freq[i]==0){
   ans=true;
get=i;
break;
    }
}
if(!ans){
    for(i=0; i<c; i++)
    {
        cout<<x[i]<<" ";
    }
    cout<<endl;
}
else{
    vector<ll>y;
    y.push_back(get);
    x.push_back(get);
    for(i=1; i<c; i++)
    {
        for(ll j=1; j<=b; j++)
        {
            if(x[x.size()-1]!=j && x[x.size()-2]!=j)
            {
                x.push_back(j);
                y.push_back(j);
                break;
            }
        }
    }
    for(auto it:y)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}


    }
}
