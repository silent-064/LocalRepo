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
        ll zero=0,one=0,two=0,thr=0,fou=0,five=0,six=0,sev=0,eig=0,nin=0;
        for(i=0; i<n; i++){
            if(s[i]=='0')zero++;
            else if(s[i]=='1')one++;
            else if(s[i]=='2')two++;
            else if(s[i]=='3')thr++;
            else if(s[i]=='4')fou++;
            else if(s[i]=='5')five++;
            else if(s[i]=='6')six++;
            else if(s[i]=='7')sev++;
            else if(s[i]=='8')eig++;
            else if(s[i]=='9')nin++;
        }
      ll last=zero+one+two+thr+fou+five;
      ll got=n/4;
      ll grp=last/2;
      ll pair=zero+one/2;
      ll ele=(last+zero)/3;
     ll ans=min(min(got,grp),min(pair,ele));
     cout<<ans<<endl;
    }
}