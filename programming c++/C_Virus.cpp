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
vector<ll>x(c);
for(i=0; i<c; i++){
    cin>>x[i];
}
sort(x.begin(),x.end());
priority_queue<ll>pq;
// pq.push(x[0]-2);
// pq.push(x[c-1]-2);
ll d=(b-x[c-1]+x[0]-1);
pq.push(d);
for(i=1; i<c; i++){
    pq.push(x[i]-x[i-1]-1);
}
ll cnt=0;
ll ans=0;
while(!pq.empty()){
    ll y=pq.top();
    pq.pop();
    if(y>2*cnt){
        ll z=y-2*cnt;
        if(z>1)ans+=z-1;
        else{
            ans+=z;
        }
    }
    cnt+=2;
}
cout<<b-ans<<endl;

    }
}