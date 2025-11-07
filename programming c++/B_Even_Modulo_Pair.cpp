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
ll f_pair(vector<ll>&b,ll &c,ll&d){
    ll si,i;
    si=b.size();
    if(b.size()<2)return 0;
    for(i=0; i+1<si; i++){
        ll mod=b[i+1]%b[i];
        if(mod%2==0){
            c=b[i];
            d=b[i+1];
            return 1;
        }
    }
    for(i=0; i<si; i++)
    {
        for(ll j=i+1; j<si; j++){
            ll md=b[j]%b[i];
            if(md%2==0){
                c=b[i];
                d=b[j];
                return 1;
            }
        }
    }
    return 0;
}
void solve(){
    ll b,i;
    cin>>b;
    vector<ll>x(b);
    vector<ll>y,z;
    ll cnt1=0,cnt2=0;
    for(i=0; i<b; i++)cin>>x[i];
    sort(x.begin(),x.end());
    for(i=0; i<b; i++){
        if(x[i]%2!=0){z.push_back(x[i]);cnt1++;}
        else{
            y.push_back(x[i]);
            cnt2++;
        }
    }
    if(cnt2>=2){
        cout<<y[0]<<" "<<y[1]<<endl;
    }
    else{
        if(y.empty()){
            ll c,d;
            if(f_pair(z,c,d)){
                cout<<c<<" "<<d<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
        else{
            ll temp=y[0];
            auto it=lower_bound(z.begin(),z.end(),temp);
            ll cnt=it-z.begin();
            ll f=0;
            for(i=0; i<cnt; i++){
                ll md=temp%z[i];
                if(md%2==0)
                {
                    cout<<z[i]<<" "<<temp<<endl;
                    f=1;
                    break;
                }
            }
            if(!f){
                ll c,d;
                if(f_pair(z,c,d)){
                    cout<<c<<" "<<d<<endl;
                }
                else{
                    cout<<-1<<endl;
                }
            }
        }
    }

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