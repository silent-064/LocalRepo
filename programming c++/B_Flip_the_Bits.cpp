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
ll solve()
{
    ll n;
    string s1,s2;
    cin>>n>>s1>>s2;
    vector<ll>prefix(n,0);
    ll sum=0;
    for(ll i=0;i<n;i++){
        if(s1[i]=='1')
            sum++;
        else
            sum--;
        prefix[i]=sum;
    }
    ll pos=0;
    for(ll i=0;i<n;i++){
        if(s1[i]!=s2[i])
            pos=i;
    }
    ll count=0;
    for(ll i=pos;i>=0;i--){
        if(s1[i]!=s2[i]&&count%2==0){
            if(prefix[i]==0){
                count++;
                while(i>=0&&s1[i]!=s2[i])
                    i--;
                i++;
            }
            else{
                no;
                return 0;
            }
        }
        else if(s1[i]!=s2[i]&&count%2==1){
            continue;
        }
        else if(s1[i]==s2[i]&&count%2==0)
            continue;
        else if(s1[i]==s2[i]&&count%2==1){
            if(prefix[i]==0){
                count++;
                while(i>=0&&s1[i]==s2[i])
                    i--;
                i++;
            }
            else{
                no;
                return 0;
            }
        }
    }
    yes;
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, i;
    cin >> a;
    while (a--)
    {

solve();



    }
}