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
    int a, i=0;
    cin >> a;
    while (a--)
    {
        ll b;
        cin>>b;
        string s;
        cin>>s;
        stack<char>x;
        for(char &ch:s)
        {
          if(ch=='(')x.push(ch);
          else if(!x.empty())x.pop();
          }
          cout<<x.size()<<endl;
        }





    }
