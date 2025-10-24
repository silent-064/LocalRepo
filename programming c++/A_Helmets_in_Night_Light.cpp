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
    ll arr1[b],arr2[b];
    for(i=0; i<b; i++)
{
    cin>>arr1[i];
}
for (i=0; i<b; i++)
{
    cin>>arr2[i];
}
vector<pair<ll,ll>>x(b);
for(i=0; i<b; i++)
{
    x[i]={arr2[i],arr1[i]};
}
ll minu=c;
ll share=1;
sort(x.begin(),x.end());
for(auto it:x){
    ll share1=it.second;
    ll minu1=it.first;
    if(minu1>=c){break;}
    if(share+share1>b)
    {
        minu+=(b-share)*minu1;
        share=b;
        break;
    }
    else{
        minu+=share1*minu1;
        share+=share1;

    }
}
minu+=(b-share)*c;
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