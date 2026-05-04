/*
 * Author  : Protic Prappo Durjoy
 * Platform: Codeforces
 * Problem : 
 * Date    :
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
ll gcdd(ll a,ll b){
    while(b!=0){
        ll temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
ll lcmm(ll a, ll b){
    ll x=gcdd(a,b);
    return (a*b)/x; //gcdd(a,b);
}
void solve(ll n){
    if(n==0)return;
    solve(n-1);
    cout<<n<<endl;

}
 ll fact(ll n){
     if(n==0 || n==1)return 1;
    return  n*fact(n-1);
}
ll  fib(ll n){
    if(n==0)return 0;
    else if(n==1)return 1;
    return fib(n-1)+fib(n-2);
}
ll digitsum(ll n){
    if(n==0)return 0;
    return n%10 +digitsum(n/10);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t,i;
    cin >> t;
    while (t--)
    {     
      
        ll n;
        cin>>n;
        ll sum=0;
        printf("%c",n);
        for(i=1; i<n; i++){
            if(n%i==0){
             sum+=i;
            }
        }
        if(sum==n)yes;
        else no;
        cout<<gcdd(2,6)<<lcmm(2,6)<<endl;
        solve(5);
        for(i=1; i<4; i++){
            cout<<fib(i)<<endl;
        }
        cout<<digitsum(13)<<endl<<fact(5);
        
    }
}