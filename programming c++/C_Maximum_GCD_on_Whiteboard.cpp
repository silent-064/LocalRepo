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
    ll a, i;
    cin >> a;
    while (a--)
    {
        ll b,c;
        cin>>b>>c;
        map<ll,ll>freq;
        ll arr[b+1];
        for(i=1; i<=b; i++)
        {
cin>>arr[i];
freq[arr[i]]++;
        }
        sort(arr+1,arr+b+1);
        ll ans=1;
        for(i=1; i<=b; i++)
        {
            ll g=freq[i]+freq[2*i]+freq[3*i];
            ll low=1,high=b,idx=-1;
            while(low<=high)
            {
                ll mid=(low+high)/2;
                if(4*i<=arr[mid])
                {
                    idx=mid;
                    high=mid-1;
                    continue;
                }
                low=mid+1;
            }
            if(idx!=-1)
            {
                g+=(b-idx+1);
            }
            ll x=b-g;
            if(x<=c)ans=max(i,ans);
        }
cout<<ans<<endl;




    }
}