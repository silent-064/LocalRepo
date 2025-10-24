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
        ll b,c;
        cin>>b>>c;
        string s1;
        cin>>s1;
        bool ans=false;
        for(char ch:s1){
            if(ch=='B')
            {ans=true;break;}
        }
        vector<ll>q(c);
        for(i=0; i<c; i++)
        {
            cin>>q[i];
        }
        vector<ll>y(c);
        for(i=0; i<c; i++){

            if(!ans){
                cout<<q[i]<<endl;
                continue;
            }
            y[i]=q[i];
            ll cnt=0,cnt1=0;
            while(y[i]>0){
                if(s1[cnt1]=='B'){y[i]/=2; cnt++;}
                else{
                    ll l=0,d=cnt1;
                    while(s1[d]=='A'){
                        d=(d+1)%b;
                        l++;
                        if(d==cnt1)break;
                    }
                    if(y[i]>l){
                        y[i]-=l;cnt1=d;cnt+=l;continue;
                    }
                    else{
                        cnt += y[i];
                        y[i] = 0;
                         break;
                    }
                }
                cnt1=(cnt1+1)%b;
            } 
            cout<<cnt<<endl;
        }
// ll cnt=0,cnt1=0;





    }
}