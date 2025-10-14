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
//upperbound mane jei element chabo or boro index amr dekhaite hbe atai upper bound soman jinis bad jbe 
ll upper_bound(vector<ll>&x,ll to_find){
ll lo=0,hi=x.size()-1;
while(hi-lo>1)
{
    ll mid=(hi+lo)/2;
    if(x[mid]<=to_find)
    {
        lo=mid+1;
    }
    else{
        hi=mid;
    }
}
if(x[lo]>to_find)return lo;
else if(x[hi]>to_find)return hi;
else return -1;

}
//lowerbond means ata return korbe or soman number nahoi or cheye aktu beshi number return  korbe jdi oi number array te present na thke to;
ll lower_bound(vector<ll>&x,ll to_find){
ll lo=0,hi=x.size()-1;
while(hi-lo>1)
{
    ll mid=(hi+lo)/2;
    if(x[mid]<to_find)
    {
        lo=mid+1;
    }
    else{
        hi=mid;
    }
}
if(x[lo]>=to_find)return lo;
else if(x[hi]>=to_find)return hi;
else return -1;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, i;
    cin >> a;
    vector<ll>x(a);
    for(i=0; i<a; i++)
    {
        cin>>x[i];
    }
    ll to_find;
    cin>>to_find;
 cout<<lower_bound(x,to_find)<<endl;
}