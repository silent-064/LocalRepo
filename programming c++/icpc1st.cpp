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
    {ll b,c,j;
        vector<ll>x;
        cin>>b>>c;
        ll arr[b][c];
        vector<ll>r1;
        ll maxu=-1;
        ll temp=0;
        ll idxi=0;
        ll idxj=0;
        for(i=0; i<b; i++){
            for(j=0; j<c; j++){
                cin>>arr[i][j];
                maxu=max(arr[i][j],maxu);
                if(maxu==arr[i][j]){
                    idxi=i;
                    idxj=j;
                    }
                }
        }
   
       // arr[idxi][idxj]=0;
       //cout<<arr[idxi][idxj];
        ll k=0;
        ll r1maxu=0;
        for(i=0; i<b; i++){
            ll calc=arr[i][k];
            for(j=1; j<c; j++){
                calc^=arr[i][j];
            }
r1maxu=max(r1maxu,calc);
  r1.push_back(calc);
          
        }
        ll v=0;
        vector<ll>c1;
        ll c1maxu=0;
        ll posr;
        ll poscl;
        for(j=0; j<c; j++){
           ll calc1=arr[v][j];

for(i=1; i<b; i++)
{
    calc1^=arr[i][j];
}
c1maxu=max(c1maxu,calc1);

  c1.push_back(calc1);  
}
ll c11=0;
for(i=0; i<c1.size(); i++){
c11+=c1[i];
}
//c11-=maxu;
ll r11=0;
for(i=0; i<r1.size(); i++){
    r11+=r1[i];
}
sort(r1.rbegin(),r1.rend());
sort(c1.rbegin(),c1.rend());
r11-=r1[0];
c11-=c1[0];
ll ans=abs(c1maxu-r1maxu);
//r11^=maxu;
cout<<r11+c11+ans<<endl;



    }
}