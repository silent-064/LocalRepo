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
    int a;
    cin >> a;
    while (a--)
    {
        ll b,c,d,e;
        cin>>b>>c>>d>>e;
        string s1;
        cin>>s1;
        ll cnt=0,cnt1;
        bool ok=false;
        ll i=0;
        cnt1=b;
        if(cnt1<c)ok=true;
        for(char ch:s1)
        {
            if(ok)
            {
                cnt+=(s1.size()-i);
                break;
            }

            if(ch=='1')
            {
                cnt++;
                cnt1=max(0LL,cnt1-d);
                if(cnt1<c) ok=true;
            }

            i++;
        }

        cout<<cnt<<endl;
    }
}
