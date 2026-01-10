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
ll n=1e6+7;
ll arr[1000007];
ll freq[1000007];
ll freq1[100007];
vector<ll>spf(n+1,0);
void divisors(){
    ll i,j;
    for(i=1; i<=n; i++){
        for(j=i; j<=n; j+=i){
            arr[j]+=i;
            freq[j]++;//count
        }
    }
}
void sppf(){ll i,j;
for(i=2; i<=n; i++){
    if(spf[i]==0){
        spf[i]=i;
        if(i*i<=n){
            for(ll j=i*i; j<=n; j+=i){
                if(spf[j]==0){
                    spf[j]=i;
                }
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
    divisors();
    sppf();
    while (a--)
    {
ll x;
cin>>x;
ll y=x;
//ll sum=0;
ll minu=spf[x];
ll maxu=spf[x];
ll cnt=0;
set<ll>s;
    while (x > 1) {
        cnt++; 
        //sum+=spf[x];
        s.insert(spf[x]);
        //freq1[spf[x]]++;
        //cout << spf[x];
         maxu=max(maxu,spf[x]);
        x /= spf[x];
       
      
        //if (x > 1) cout << " * ";
    }
    cout<<minu<<" "<<maxu<<" "<<s.size()<<" "<<cnt<<" "<<freq[y]<<" "<<arr[y]<<endl; 





    }
}