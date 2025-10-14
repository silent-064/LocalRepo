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
        ll b,c,d;
        cin>>b>>c>>d;
        while(d>0)
        {
            if(b==1)
            {
                b=d%(c-1) + 1;
                d=0;
            }
            else
            {
                ll r=min(d,c-b%c);
                b+=r;
                while(b%c==0)
                    b/=c;
                d-=r;
            }
        }
        cout<<b<<endl;
    }
}
