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

void solve(){
    ll b,c,i;
    string s;
    cin>>b>>c>>s;
    ll cnt=0,ans=1;
    for(char ch:s){
        if(ch=='1'){
            cnt++;
            if(cnt>=c){
                ans=0;
            }
        } else cnt = 0; 
    }

    if(!ans){ no; return; }
    yes;

    ll y=b;
    vector<ll>x(b);
    for(i=0; i<b; i++){
        if(s[i]=='0') x[i] = y--;
    }
    for(i=0; i<b; i++){
        if(s[i]=='1') x[i] = y--;
    }
    for(i=0; i<b; i++){
        if(i) cout << ' ';
        cout << x[i];
    }
    cout<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a;
    cin >> a;
    while (a--)
    {
        solve();
    }
}
