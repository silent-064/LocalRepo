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
ll b,c;
cin>>b>>c;
vector<ll>x(b);
if(b==2)
{
    cout<<"2 1"<<endl;
}
else{
    if(c%2==0)
    {
        for(i=0; i<b; i++)
        {
            x[i]=b-1;
        }
        x[b-2]=b;
    }
    else{
        for(i=0; i<b; i++)
        {
            x[i]=b;
        }
        x[b-1]=b-1;
    }
    for(i=0; i<b; i++)
    {
        cout<<x[i]<<' ';
    }
}



    }
}