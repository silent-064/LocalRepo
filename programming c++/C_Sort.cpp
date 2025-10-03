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
        ll n,q;
        cin>>n>>q;
        string a,b;
        cin >>a>>b;
        vector<map<char,int>> v(n + 1);
        for (int i = 0; i < n; i++) {
            v[i + 1] = v[i];   
            v[i + 1][a[i]]++;    
            v[i + 1][b[i]]--;
        }
        while (q--) {
            ll l,r;
            cin>>l>>r;
            l--; 
            ll s = 0;
            for (char c='a';c<='z';c++) {
                ll diffR=0,diffL=0;
                if (v[r].find(c)!=v[r].end()){
                    diffR=v[r][c];
                }
                if (v[l].find(c)!=v[l].end()){
                    diffL=v[l][c];
                }
                ll diff=diffR-diffL;
                if (diff>0) {
                    s+=diff;
                }
            }
            cout <<s<<endl;
        }




    }
}
