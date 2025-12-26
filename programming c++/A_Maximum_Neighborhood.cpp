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
ll n;
cin>>n;
ll x=n*n;
ll calc1=(x+(x-1)+(x-2)+(x-n));
ll calc2=((x-n-1)+(x-n-2)+(x-1)+(x-n)+(x-(2*n)-1));
if(n==1)cout<<1<<endl;
else if(n==2)cout<<9<<endl;
else if(n==3)cout<<29<<endl;
else if(n==4)cout<<56<<endl;
else{
    ll calc=max(calc1,calc2);
    cout<<calc<<endl;
}




    }
}