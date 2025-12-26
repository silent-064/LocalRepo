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
        ll n;
        cin>>n;
        ll sum=0;
        ll ans=0;
        for(i=0; i<n; i++){
            ll b,c,d,e;
            cin>>b>>c>>d>>e;
            if((b==d && c>e)||(b!=d && c>e)){
                sum+=c-e;
                sum+=b;
            }
            else if((c==e && b>d)||(c!=e && b>d)){
                ans+=b-d;
            }
        }

cout<<max(sum,ans)<<endl;



    }
}