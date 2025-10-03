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
ll xor_op(ll b)
{
    if(b%4==0)return b;
    else if(b%4==1)return 1;
    else if(b%4==2)return b+1;
    else return 0;
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
ll b,c;
cin>>b>>c;
ll ans=xor_op(b-1);
// for(i=0; i<b; i++)
// {
//     ans^=i;
  
// }
if(ans==c)cout<<b<<endl;
else if((ans^c)==b)cout<<b+2<<endl;
else{
    cout<<b+1<<endl;
}


    }
}