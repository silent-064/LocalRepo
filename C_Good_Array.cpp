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
const ll INF = 1e6 + 7;
const ll mod = 998244353;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t,i;
    cin >> t;
    //vector<pair<ll,ll>>v;
    ll arr[INF],cnt[INF];
    memset(cnt, 0, sizeof(cnt));

    ll sum=0;
    for(i=0; i<t; i++){
        ll x;
        cin>>x;
        arr[i]=x;
        cnt[x]++;
        sum+=x;   
    }
    vector<ll>pos;
    for(i=0; i<t; i++){
        cnt[arr[i]]--;
        sum-=arr[i];
        if(sum/2<INF && cnt[sum/2] && sum%2==0){
            pos.push_back(i+1);
        }
        cnt[arr[i]]++;
        sum+=arr[i];
    }
    cout<<pos.size()<<endl;
    for(auto it:pos){
        cout<<it<<" ";
    }


    

}