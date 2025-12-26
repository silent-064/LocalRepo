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
bool binarysearch(vector<ll>&arr,ll findu){
    ll lo=0,hi=arr.size()-1;
while(hi-lo>1){
    ll mid=(hi+lo)/2;
if(arr[mid]<findu){
    lo=mid;
}    
else{
    hi=mid;
}

}
if(arr[lo]==findu)return true;
else if(arr[hi]==findu)return true;
else return false;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, i;
ll m,n;
cin>>m>>n;
vector<ll>arr(m);
for(i=0; i<m; i++){
    cin>>arr[i];
}
sort(arr.begin(),arr.end());
vector<ll>findd(n);
for(i=0; i<n; i++){
    cin>>findd[i];
}
for(i=0; i<n; i++){
    if(binarysearch(arr,findd[i]))yes;
    else no;
}
   
}