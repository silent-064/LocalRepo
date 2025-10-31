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
        vector<ll>x(b);
        bool ans=true;
        ll cnt=0,cnt1=0;
        for(i=0; i<b; i++)
        {
            cin>>x[i];
            if(x[i]%2==0)cnt++;
            else cnt1++;
        }
// if(cnt==b || cnt1==b);

if(cnt1>=1)
{
    if(cnt1<b){
        sort(x.begin(),x.end());
    }
}
for(i=0; i<b; i++)
{
    cout<<x[i]<<" ";
}
cout<<endl;

    }
}