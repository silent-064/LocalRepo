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
    ll n,i;
string s;
       cin>>s;
       string newu;
       n=s.size();
       newu="";
       newu+=s[0];
       char ch;
       for(i=1; i<n; i++)
        {
            if(newu[i-1]==s[i]){
                for(ch='a'; ch<='z'; ch++){
                    if(ch!=newu[i-1]&&(i+1>=n||ch!=s[i+1]))
                {
                    newu+=ch;
                    break;
                }
                }
            }
            else {
                newu+=s[i];
            }
        }  
        cout<<newu<<endl;         
}