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
        ll b,j;
        cin>>b;
        vector<ll>x(b);
        for(i=0; i<b; i++)
        {
cin>>x[i];
        }
        ll cnt=0,m;
        map<ll,ll>freq;
        for(i=0; i<b; i++)
        {m=x[i]-i;
            cnt+=freq[m];
            freq[m]++;

        }
//         for(i=0; i<b; i++)
//         {
// for(j=i+1; j<b; j++)
// {
// if((j-i)==(x[j]-x[i]))cnt++;
// }
//         }
        cout<<cnt<<endl;






    }
}