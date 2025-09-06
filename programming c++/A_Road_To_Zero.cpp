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

    int a,i;
    cin >> a;
    while (a--)
    {
     ll x,y,b,c;
        cin >> x >> y >> b >> c;

        ll minu=min(x, y);
        ll maxu=max(x, y);
        ll calc, cnt, ans;
        calc=(minu + maxu)*b;                 
        cnt=(maxu - minu)*b+minu*c;      

        if(calc<cnt)
        {
            ans=calc;
        }
        else
        {
            ans=cnt;
        }

        cout <<ans<< endl;
    }

// if(x==0 && y==0){cout<<0<<endl;}
// else if((b<c && x>0 && y>0 && c<=2*b)||(b>c && x>0 && y>0)||(b==c && x>0 && y>0))
// {
//     calc=(maxu-minu)*b;
//     cnt=minu*c;
//     ans=calc+cnt;
//     cout<<ans<<endl;
// }
// else if(b<c && x>0 && y>0 && c>2*b){
//     calc=x*b;
//     cnt=y*b;
//     cout<<cnt+calc<<endl;
// }
// else if((x==y && x*y*b>=x*c)){
//     calc=x*c;
//     cout<<calc;
// }
// else if(x==y && x*y*b<c)
// {
//     cout<<x*y*b<<endl;
// }
// else if(x==y && b==c){
//     cout<<x*b<<endl;
// }


    }
