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
    int a,b, i;
    cin >> a>>b;
    if(a==1 && b>9)cout<<-1;
    else{i=1;
        cout<<b;
        if(b==10)
        {
            i=2;
        }
        for(; i<a; i++)
        {
            cout<<0;
        }
    }
//     else{
//         if(b>9 && a>=2 && a%2==0)
//         {
//            for(i=0; i<a/2; i++)
//     {
//         cout<<b;
//     }  
//         }
//         else if(b>9 && a>2 && a%2!=0)
//         {a=a-1;
//             cout<<1;
//              for(i=0; i<a/2; i++)
//     {
//         cout<<b;
//     }
//         }
//         else{
//  for(i=0; i<a; i++)
//     {
//         cout<<b;
//     }
//         }

//     }
   

}