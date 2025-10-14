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
ll n;cin>>n;
        vector<int>a(n);
        map<int,int>freq;
        for(int i=0;i<n;i++){
            cin>>a[i];
            freq[a[i]]++;
        }
    ll b=0,c=0;
        for(i=0;i<=101;i++){
            if(freq[i]==0){b=i;break;}
        }
        for(int i=0;i<=101;i++){
            if(freq[i]<2){c=i;break;}
        }
        cout<<max(b,c)<<endl;




    }
}