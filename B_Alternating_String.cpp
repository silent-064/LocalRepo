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
      string s;
      cin>>s;
      ll n=s.size();
      ll cnt=0;

      for(i=0; i<n; i++){
        if(i+3<n && s[i]==s[i+1] && s[i]==s[i+2] && s[i]==s[i+3]){
            cnt=10;
            break;
        }
        else if(i+2<n && s[i]==s[i+1] && s[i]==s[i+2]){
            cnt+=3;
            i+=2;
        }
        else if(i+1<n && s[i]==s[i+1]){
            cnt+=2;
            i+=1;
        }
      }

      if(cnt>4) no;
      else yes;     
    }
}