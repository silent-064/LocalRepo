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
bool f_pair(const vector<ll>& b, ll& x, ll& y){
ll m=b.size();if(m<2)return false;
ll i=0;while(i<m){
ll j=i+1;while(j<m){
if((b[j]%b[i])%2==0){x=b[i];y=b[j];return true;}
j++;}
i++;}
return false;}
void solve(){
int n;cin>>n;
vector<ll> a(n);
int i=0;while(i<n){cin>>a[i];i++;}
vector<ll> o, e;
i=0;while(i<n){
if(a[i]%2==0){e.push_back(a[i]);}else{o.push_back(a[i]);}
i++;}
sort(o.begin(), o.end());
if(e.size()>=2){cout<<e[0]<<" "<<e[1]<<"\n";return;}
if(e.size()==0){
ll x, y;
if(f_pair(o, x, y)){cout<<x<<" "<<y<<"\n";}else{cout<<"-1\n";}
return;}
ll ev=e[0];
bool ok=false;
int k=0;while(k<o.size()){
if((ev%o[k])%2==0){cout<<o[k]<<" "<<ev<<"\n";ok=true;break;}
k++;}
if(!ok){
ll x, y;
if(f_pair(o, x, y)){cout<<x<<" "<<y<<"\n";}else{cout<<"-1\n";}
}}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int a, i;
cin >> a;
while (a--)
 {

solve();



}
}