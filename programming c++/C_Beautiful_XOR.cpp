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
        bitset<62>aa=b;
        bitset<62>bb=c;
        vector<ll>ans;
        for(i=0; i<=61; i++){
            if(bb[i]!=aa[i]){
                ans.push_back((1LL<<i));
            }
        }
        bool ok=true;
        for(auto it:ans){
            if(b>=it)b^=it;
            else ok=false;
        }
        if(ok){
            cout<<ans.size()<<endl;
            for(auto it:ans)
            {
                cout<<it<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<-1<<endl;
        }
// ll b,c;
// cin>>b>>c;
// if(c>b)cout<<-1<<endl;
// else if(b==c)cout<<0<<endl;
// else if((b|c)!=c)cout<<-1<<endl;
// else {
// ll x=b^c;

//                 cout<<1<<endl;
//                 cout<<x<<endl;
//     // cout<<2<<endl;
//     // cout<<b<<" "<<c<<endl;
// }




    }
}