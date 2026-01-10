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
void solve(){
    ll i,j;
    for(i=1; i<=n; i++){
        for(j=i; j<=n; j+=i){
            arr[j]+=i;
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
    solve();
    while (a--)
    {
ll b;
cin>>b;
cout<<arr[b]-b<<endl;




    }
}