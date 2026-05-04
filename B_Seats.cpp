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
    while (t--)
    {     

        ll n;
    string s;
    cin>>n>>s;
 
    int res=count(s.begin(),s.begin()+n,'1');
    s='0'+s+"01";
    ll cur=0;
    for(auto c:s){
        if(c=='0'){
            cur++;
        }else{
            res+=cur/3;
            cur=0;
        }
    }
 
    cout<<res<<endl;
        
    }
}