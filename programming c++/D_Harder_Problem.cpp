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
ll x[b+1];
for(i=1; i<=b; i++){
    cin>>x[i];
}
ll cnt=0;
ll arr[b+100];
memset(arr,0,sizeof(arr));
for(i=1; i<=b; i++)
{
    if(arr[x[i]]==1)cnt++;
    else{
        arr[x[i]]=1;
        cout<<x[i]<<' ';
    }
}
for(i=1; i<=b; i++)
{
    if(arr[x[i]]!=1)cout<<i<<" ";
}
cout<<endl;
// y.push_back(x[0]);
// for(i=1; i<b; i++)
// {
//     if(x[i]!=x[i-1]){
//         y.push_back(x[i]);
//     }
//     else{
//         if(x[i]==x[i-1]){
//             if(i==x[i]){
//                 y.push_back(x[i]+)
//             }
//         }
//     }




    }
}