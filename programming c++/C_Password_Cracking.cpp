/*
 * Author : Protic Prappo Durjoy
 * Date :
 */
#include <bits/stdc++.h>
//#define endl "\n"
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
    string s1="";
        while(s1.size()!=b){
            cout<<"? "<<s1+'0'<<endl;
            cout.flush();
            ll ans;
            cin>>ans;
            if(ans){
                s1+='0';
                continue;
            }
            cout<<"? "<<s1+'1'<<endl;
            cout.flush();
            cin>>ans;
            if(ans){
                s1+='1';
                continue;
        }
        break;
        }
while(s1.size()!=b){
cout<<"? "<<'0'+s1<<endl;
cout.flush();
ll ans;
cin>>ans;
if(ans){s1='0'+s1;continue;}
s1='1'+s1;
}
cout<<"! "<<s1<<endl;




    }
}