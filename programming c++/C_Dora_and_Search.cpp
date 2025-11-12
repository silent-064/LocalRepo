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
ll maxu=b;
ll minu=1;
vector<ll>x(b);
for(i=0; i<b; i++){
    cin>>x[i];
}
ll ans=true;
ll l=0,r=b-1;
while(r>=l){
    if((x[l]==maxu && x[r]==minu)||(x[l]==minu && x[r]==maxu)){
        maxu--;
        minu++;
        l++;
        r--;
    }
    else if(x[l]==maxu){
        l++;
        maxu--;
    }
    else if(x[l]==minu){l++; minu++;}
    else if(x[r]==maxu){r--; maxu--;}
    else if(x[r]==minu){r--; minu++;}
    else{
        cout<<l+1<<" "<<r+1<<endl;
        ans=false;
        break;
    }
}
 if(ans)cout<<-1<<endl;



    }
}