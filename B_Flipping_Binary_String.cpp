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
        cin>>n;
        string s;
        cin>>s;
        ll zero=0,one=0;
        for(i=0; i<n; i++){
            if(s[i]=='1')one++;
            else zero++;
        }
          if(one==0)cout<<0<<endl;
        else if(one%2==0){
            cout<<one<<endl;
            for(i=0; i<n; i++){
                if(s[i]=='1'){
                    cout<<i+1<<" ";
                }
            }
            cout<<endl;
        }
        else if(zero%2!=0){
            cout<<zero<<endl;
            for(i=0; i<n; i++){
                if(s[i]=='0'){
                    cout<<i+1<<" ";
                }
                cout<<endl;
            }
        }
        else{
            cout<<-1<<endl;
        }

    }
}