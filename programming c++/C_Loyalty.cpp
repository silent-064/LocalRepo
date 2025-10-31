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
void solve()
{
    ll b,c,i,j;
    cin>>b>>c;
    vector<ll>x(b);
    for(i=0; i<b; i++)
    {
        cin>>x[i];
    }  
     ll sum=0,cnt=0;
     sort(x.begin(),x.end());
    for(i=0; i<b; i++)
    {
        sum+=x[i];
    }
    ll z=sum/c;
for(i=b-z; i<b; i++){
    cnt+=x[i];
}
vector<ll>y;
ll cnt1=0,l=0,r=b-1,a;
cout<<cnt<<endl;
    while(l<=r)
    {
        ll rem=cnt1%c;
        //ll o=
        if(rem==0){
            a=c;
        }
        else{
            a=c-rem;
        }
        if(x[l]<a){
            y.push_back(x[l]);
           cnt1+=x[l];
           l++;       
        }
        else{
            y.push_back(x[r]);
            cnt1+=x[r];
            r--;
        }

    }
    for(i=0; i<b; i++)
    {
        cout<<y[i]<<" ";
    }
    cout<<endl;
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

solve();



    }
}