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
void dfs(int vertex){
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
    int n,e;
    cin>>n>>e;
    for(i=0; i<e; i++){
        int v1,v2;
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    int cnt=0;
    for(i=1; i<=n; i++){
        if(vis[i])continue;
        dfs(i);
        cnt++;
    }
    cout<<cnt<<endl;
}