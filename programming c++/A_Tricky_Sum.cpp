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

    ll  a,i;
    cin >> a;
    while (a--)
    {
        ll b;
        cin >> b;
        if (b == 1)
        {
            cout << -1 << endl;
            continue;
        }
ll sum =(b*(b+1))/2;
        bool ans = true;
        for(i=1; i<=b; i<<=1)
        {
            // if(ans){
             sum-=2*i;
            //  ans=false;
            // }
            // else{
            //     ans=true;
            // }
        }
        // for (ll i = 1; i <= b; i++)
        // {
        //     // check if i is power of 2
        //     if ((i & (i - 1)) == 0)
        //     {
        //         if (ans)
        //         {
        //             sum += -i;
        //             ans = false;
        //         }
        //         else
        //         {
        //             sum += i;
        //             ans = true;
        //         }
        //     }
        //     else
        //     {
        //         sum += i;
        //     }
        // }

        cout << sum << endl;
    }
}
