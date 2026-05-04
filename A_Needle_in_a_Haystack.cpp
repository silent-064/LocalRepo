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

    ll t,i,j;
    cin >> t;
    while (t--)
    {     
       string s1,s2;
       cin>>s1>>s2;
       vector<ll>freq(26,0);
       {
        for(auto it:s2){
            freq[it-'a']++;
        }
        for(auto it:s1){
            freq[it-'a']--;
        }
        bool ok=true;
        for(auto it:freq){
            if(it<0){
                ok=false;
                break;
            }
        }
        if(!ok){
            cout<<"Impossible"<<endl;
        }
        else{
             string extra="";

       for(i=0; i<26; i++) {
        for(j=0; j<freq[i]; j++) {
            extra+=char('a'+i);
        }
    }
    s1+="~"; 
    extra+="~";
    ll l=0,r=0;
    string result="";
    while(result.size()<s2.size()) {
        if(s1[l] <= extra[r]) {
            result+=s1[l];
            l++;
        } else {
            result+=extra[r];
            r++;
        }
    }
    
    cout<<result<<endl;
        }
       }      
    }
}