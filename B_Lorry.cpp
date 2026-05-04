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

    ll n,k;
    cin>>n>>k;
    vector<pair<ll,ll>>arr,arr1;
    for(ll i=0;i<n;i++){
        ll x,y;
        cin>>x>>y;
        if(x==1)arr.push_back({y,i});
        else arr1.push_back({y,i});
    }
    sort(arr.rbegin(),arr.rend());
    sort(arr1.rbegin(),arr1.rend());
    ll sum=0,ans=0,C=0,fi=0,se=0,p=0;
    while(p<(ll)arr1.size() && C+2<=k){
        sum+=arr1[p].first;
        C+=2;
        p++;
    }
    ans=sum;
    fi=0;
    se=p;
    for(ll i=0;i<arr.size();i++){
        sum+=arr[i].first;
        C++;
        while(p>0 && C>k){
            p--;
            sum-=arr1[p].first;
            C-=2;
        }
        if(C<=k && sum>ans){
            ans=sum;
            fi=i+1;
            se=p;
        }
    }
    cout<<ans<<endl;
    vector<ll>pos;
    for(ll i=0;i<fi;i++)pos.push_back(arr[i].second);
    for(ll i=0;i<se;i++)pos.push_back(arr1[i].second);
    sort(pos.begin(),pos.end());
    for(auto it:pos)cout<<it+1<<" ";
    cout<<endl;
}
