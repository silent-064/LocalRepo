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
        ll b,ans=0;
        cin>>b;
        vector<ll>x(b);
        for(i=0; i<b; i++)
        {
            cin>>x[i];
        }
        for(i=1; i<=70; i++)
        {
            ll k,j;
            set<ll>v;
            k=1LL<<i;
            for(j=0; j<b; j++)
            {
                v.insert(x[j]%k);
        
            }
if(v.size()==2){
    ans=k;
    break;
}

        }
        cout<<ans<<endl;





    }
}