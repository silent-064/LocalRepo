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
double x;
cin>>b>>x;
vector<ll>y(b);
ll sum=0;
for(i=0; i<b; i++){
cin>>y[i];
sum+=y[i];
}
// if(b==1 &&(y[0]==x)){
// yes;
// }
// else if(b>1 && b%2!=0){
// ll div=sum/b;
// if(div==x)yes;
// }

double div=(double)sum/b;
if(div==x)yes;
else no;



    }
}