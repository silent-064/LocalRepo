/*
 * Author : Protic Prappo Durjoy
 * Date :
 */
#include <bits/stdc++.h>
#define endl "\n"
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define ft float
#define du double
#define ull unsigned long long
#define ll long long
const ll INF=1e9+7;
const ll mod=998244353;
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int a,i,j;
cin>>a;
while(a--){
ll b,c;cin>>b>>c;
ll n=b*b;
if(c==n-1){no;continue;}
if(c>n){no;continue;}
yes;
vector<vector<char>>x(b,vector<char>(b,'R'));
ll cnt=0;
for(i=0;i<b&&cnt<c;i++){
for(j=0;j<b&&cnt<c;j++){
x[i][j]='U';cnt++;
}}
for(i=0;i<b;i++){
for(j=0;j<b;j++){
if(x[i][j]=='U')continue;
if(j==b-1&&i!=b-1)x[i][j]='D';
else if(i==b-1&&j==b-1)x[i][j]='L';
else x[i][j]='R';
}}
for(i=0;i<b;i++){
for(j=0;j<b;j++)cout<<x[i][j];
cout<<endl;
}}}
