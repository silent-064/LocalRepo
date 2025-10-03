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
    string s;
    cin>>s;
    ll a=0,b=0,c=0,n=s.size(),i;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='A')
        a++;
        else if(s[i]=='B')
        b++;
        else
        c++;
    }
   char d='Z';
   ll r=0;
   if(a==n/2)
   d='A';
   else if(b==n/2)
   d='B';
   else if(c==n/2)
   d='C';
   else
   r=1;
   if(s[0]==d)
   {
        string t="";
        for(i=0;i<n;i++)
        {
            if(s[i]==d)
            t=t+'(';
            else
            t=t+')';
        }
      
        ll p=0;
        ll q=0;
        for(i=0;i<n;i++)
        {
            if(t[i]=='(')
            {
                p++;
                
            }
            else
            {
                p--;
            
                if(p<0)
                {
                    r=1;
                    break;
                }
            }
        }
   }
   else if(s[n-1]==d)
   {
        string t="";
        for(i=0;i<n;i++)
        {
            if(s[i]==d)
            t=t+')';
            else
            t=t+'(';
        }
        ll p=0,q=0;
        for(i=0;i<n;i++)
        {
            if(t[i]=='(')
            {
                
                p++;
                
            }
            else
            {
                p--;
            
                if(p<0)
                {
                    r=1;
                    break;
                }
            }
        }
   }
   else
   r=1;
   if(r==1)
   cout<<"NO"<<endl;
   else
   cout<<"YES"<<endl;
   
    
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