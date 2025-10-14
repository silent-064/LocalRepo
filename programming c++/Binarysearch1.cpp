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
    vector<ll>x(a);
    for(i=0; i<a; i++)
    {
        cin>>x[i];
    }
    ll to_find;
    cin>>to_find;
    ll lo=0,high=a-1;
    while(high-lo>1)
    {
        ll mid=(high+lo)/2;
        if(x[mid]<to_find){
            lo=mid+1;
        }
        else{
            high=mid;
        }
    }
    if(x[lo]==to_find)cout<<lo<<endl;
    else if(x[high]==to_find)cout<<high<<endl;
    else cout<<"Not found";
}