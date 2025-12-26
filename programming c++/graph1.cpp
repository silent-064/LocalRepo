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
const int N=1e5+10;
using namespace std;
vector<int>g[N];
bool vis[N];
int dfs(int vertex){
    vis[vertex]=true;
    for(int child:g[vertex]){
        if(vis[child])continue;
        dfs(child);
    }
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, i;
    ll n,m;
    cin>>n>>m;
    for(i=0; i<m; i++){
        ll v1,v2;
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
}