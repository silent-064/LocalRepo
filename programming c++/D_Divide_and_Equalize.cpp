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
map<ll,ll>freq;
void primefactor(ll n) {
//vector <in t> f;
for (int x = 2; x*x <= n; x++) {
while (n%x == 0) {
// f.push _ba ck(x);
n /= x;
   freq[x]++;

}
}
if (n > 1) freq[n]++;//f.push _ba ck(n);

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
ll b;
freq.clear();
cin>>b;
vector<ll>x(b);
for(i=0; i<b; i++)
{
    cin>>x[i];
    primefactor(x[i]);
}
bool ans=true;
for(auto it:freq){
    if(it.second%b!=0)ans=false;
}
if(ans)yes;
else no;


    }
}