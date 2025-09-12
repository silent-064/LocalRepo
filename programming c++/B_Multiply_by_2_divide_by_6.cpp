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
        ll b;
        cin>>b;
ll cnt=0;
        while(b!=1)
        {
if(b%6==0)
{
    b/=6;
    cnt++;
}
else if(b%6!=0)
{
    b*=2;
    cnt++;
    if(b%6==0)
    {
        continue;
      
    }
    else{
        cnt=-1;
        break;
    }
}

        }
cout<<cnt<<endl;




    }
}