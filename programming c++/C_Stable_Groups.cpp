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
    
        ll n,k,x;
        cin>>n>>k>>x;
        vector<ll>arr;
        for(i=0; i<n; i++){
ll z;
            cin>>z;
            arr.push_back(z);
        }
        sort(arr.begin(),arr.end());
        bool ok;
        if(k>0)ok=true;
        else false;
        for(i=0; i<n-1 && ok; i++){
            if(arr[i+1]-arr[i]>x){
                ll y;
                y=(arr[i+1]+arr[i])/2;
                arr.push_back(y);
                k--;
            }
            if(k==0){
                break;
            }
        }
        bool nxt;
        if(k==0){nxt=false;}
        else nxt=true;
        sort(arr.begin(),arr.end());
        for(i=0; i<arr.size()&& nxt; i++){
            if(arr[i+1]-arr[i]>x){
                ll y;
             y=(arr[i+1]+arr[i])/2;
             arr.push_back(y);
                k--;
            }
            if(k==0){
                break;
            }
        }
        sort(arr.begin(),arr.end());
        ll cnt=1;
        for(i=0; i<n-1; i++){
            if(arr[i+1]-arr[i]>x){cnt++;}
        }
        cout<<cnt<<endl;
        





    +
}