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
        ll b,l,r;
        cin>>b>>l>>r;
        ll cnt=0;
        vector<ll>x;
        for(i=0; i<b; i++)
        {
            ll y;
            cin>>y;
            x.push_back(y);
        }
        ll sum=0,ans=0;
        for(i=0; i<b; i++)
        {
            sum+=x[i];
            while(sum>r)
            {
                sum-=x[cnt++];
            }
            if(sum>=l && sum<=r)
            {
                ans++;
                cnt=i+1;
                sum=0;
            }
        }
        cout<<ans<<endl;
    }
}
