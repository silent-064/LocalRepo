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
    {ll b;
        cin>>b;
vector<ll>x(b),pre(b),suff(b);
for(i=0; i<b; i++){
    {
        cin>>x[i];
    }
}
string sh="";
suff[0]=x[0];
pre[b-1]=x[b-1];
for(i=1; i<b; i++){
suff[i]=min(suff[i-1],x[i]);    
}
for(i=b-2; i>=0; i--){
pre[i]=max(pre[i+1],x[i]);    
}
for(i=0; i<b; i++){
    if(suff[i]<x[i] && pre[i]>x[i]){
        sh+='0';
    }
    else{
        sh+='1';
    }
}
cout<<sh<<endl;


    }
}