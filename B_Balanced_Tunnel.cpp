/*
 * Author  : Protic Prappo Durjoy
 * Platform: Codeforces
 * Problem : 
 * Date    :
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

    ll t,i;
    cin >> t;
    vector<pair<ll,ll>>arr;
    for(i=0;i<t;i++){
        ll x;
        cin>>x;
        arr.push_back({x,i});
    }
    vector<ll>arr1(t),arr2(t);
    vector<ll>pos(t+1);
    for(auto it:arr){
        pos[it.first]=it.second;
    }
    vector<pair<ll,ll>>cpy;
    for(i=0;i<t;i++){
        ll y;
        cin>>y;
        cpy.push_back({y,i});
    }
    i=0;
    ll j=0;
    for(auto it:cpy){
        arr2[j]=pos[it.first];
        j++;
    }
    ll maxu=0;
    ll mn=t;
    for(i=t-1;i>=0;i--){
        if(arr2[i]>mn){
            maxu++;
        }
        mn=min(mn,arr2[i]);
    }
    cout<<maxu<<endl;
}