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
    // map<<string,ll>freq;
    // for(i=0; i<b; i++)
    while (a--)
    {
        ll x;
        cin>>x;
        string sh,s2;
        cin>>sh>>s2;
        sort(sh.begin(),sh.end());
        sort(s2.begin(),s2.end());


      
       

//         for(auto it:s1)
//         {
// if()
//         }
bool ans=true;
        for(i=0; i<x; i++)
        {
if(sh[i]!=s2[i]){ans=false;break;}
        }
if(ans)yes;
else no;





    }
}