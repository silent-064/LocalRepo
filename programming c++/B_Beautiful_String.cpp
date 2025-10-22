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
bool pal(string &s){
    for(int i=0,j=s.size()-1;i<j;i++,j--) if(s[i]!=s[j]) return 0;
    return 1;
}

bool nd(string &s){
    for(int i=1;i<s.size();i++) if(s[i]<s[i-1]) return 0;
    return 1;
}
void solve(){
     ll n,i;
        string s;
        cin>>n>>s;
        bool ok=false;
        for(m=0;m<(1<<n);m++){
            string p="",x="";
            vector<ll>v;
            for(i=0;i<n;i++){
                if(m>>i&1)p+=s[i],v.push_back(i+1);
                else x+=s[i];
            }
            if(nd(p)&&pal(x)){
                cout<<v.size()<<endl;
                for(auto i:v)cout<<i<<" ";
                if(!v.empty())cout<<endl;
                else cout<<endl;
                ok=true;break;

            }
        }
        if(!ok)cout<<-1<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,i;
    cin>>a;
    while(a--){
       solve();
    }
}






