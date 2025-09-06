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
    {
ll b;
cin>>b;
if(b<=9 && b>=0)
{
cout<<b<<endl;
}
else if(b>45)cout<<-1<<endl;
else{
    ll sum=0,cnt=9;
    vector<ll>x;
    while(sum<b && cnt>0)
    {
      x.push_back(min(cnt,b-sum));
      sum+=cnt;
      cnt--;
    }
    if(sum<b)cout<<-1<<endl;
    else{
        reverse(x.begin(),x.end());
        for(auto it:x)
        {
            cout<<it;
        }
        cout<<endl;
    }
}



    }
}