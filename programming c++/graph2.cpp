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
// vector<vector<int>>cc;
// vector<int>current_cc;
bool dfs(int vertex,int parent){
    /**Take action on vertex after enter
     * the vertex
     */
    vis[vertex]=true;
    bool isloopexists=false;
    //current_cc.push_back(vertex);
    for(int child:g[vertex]){
        if(vis[child] && child==parent)continue;
        if(vis[child])return true;
         /**Take action on child before entering
         * the child node
         */
        isloopexists|=dfs(child,vertex);
         /**Take action on child after exiting
         * child node
         */
    }
     /**Take action on vertex before exiting
     * the vertex
     */
    return isloopexists;
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, i;
    ll n,e;
    cin>>n>>e;
    for(i=0; i<e; i++){
        ll v1,v2;
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    ll cnt=0;
    bool isloopexists=false;
    for(i=1; i<=n; i++){
        if(vis[i])continue;
        //current_cc.clear();
        if(dfs(i,0)){
            isloopexists=true;
            break;
        }
        // cc.push_back(current_cc);
        // cnt++;
    }
    cout<<isloopexists<<endl;
    // cout<<cc.size()<<endl;
    // for(auto c_cc:cc){
    //     for(int vertex:c_cc){
    //         cout<<vertex<<" ";
    //     }
    //     cout<<endl;
    // }
}