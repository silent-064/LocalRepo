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
void solve(){
ll b,c,i;
cin>>b>>c;
vector<ll>x(b);
ll cnt=0;
for(i=0; i<b; i++){
cin>>x[i];
if(x[i]%2==0)cnt++;
}
ll minu=INF;
for(i=0; i<b; i++)
{if(x[i]%c==0)minu=0;
    ll y=c-(x[i]%c);
minu=min(minu,y);

}
if(c==4){
    if(cnt>=2)minu=min(minu,0LL);
    else if(cnt==1)minu=min(minu,1LL);
    else if(cnt==0)minu=min(minu,2LL);
}
cout<<minu<<endl;
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