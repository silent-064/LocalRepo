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

        ll b,j;
        cin>>b;
        string s;
        
        
        cin>>s;
        s="*"+s;
        vector<ll>found(b+1,0);
        ll ans=0;
        for(i=1; i<=b; i++){
            if(s[i]=='1')found[i]=-1;
        }
for(i=1; i<=b; i++){
for(j=i; j<=b; j+=i){
    if(found[j]==0){
        found[j]=4;
        ans+=i;
    }
    else if(found[j]==-1){
        break;
    }
}
}
cout<<ans<<endl;



    }
}