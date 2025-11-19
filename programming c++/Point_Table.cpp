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
    i=1;
    while (a--)
    {
        ll maxu=INF;
ll b,c,d;
cin>>b>>c>>d;
maxu=max(max(b,c),d);
ll ans=(b+c+d)-maxu;
if(maxu==6 && (ans==3 || ans==2))cout<<"Case "<<i<<": perfectus"<<endl;
else if((maxu==3)&&(ans==6 ||ans==5))cout<<"Case "<<i<<": perfectus"<<endl;
else if((maxu==4)&&(ans==4||ans==3))cout<<"Case "<<i<<": perfectus"<<endl;
else if(b==2 && c==2 && d==2)cout<<"Case "<<i<<": perfectus"<<endl;
else cout<<"Case "<<i<<": invalidum"<<endl;
i++; 





    }
}