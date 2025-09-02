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
    string s;
    cin>>s;
    ll cnt0=0,cnt1=0;
    bool ok=false;
    for(char ch:s)
    {
        if(ch=='0'){
            cnt0++;
            cnt1=0;
            if(cnt0>=7){
                ok=true;
                break;
            }
        }
        else if (ch=='1')
        {
            cnt1++;cnt0=0;
            if(cnt1>=7){
                ok=true;
                break;
            }
        }
        

    }
    if(ok){yes;}
    else no;
    
}