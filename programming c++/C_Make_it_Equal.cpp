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
#define ll long long
#define ull unsigned long long
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
        ll b,k;
        cin>>b>>k;
        vector<ll>x(b);
        map<ll,ll>freq;
        for(i=0; i<b; i++)
        {
            cin>>x[i];
        }
        for(i=0; i<b; i++)
        {
            ll y;
            cin>>y;
            y%=k;
            freq[y]++;
        }
        for(i=0; i<b; i++)
        {
            ll z=x[i]%k;
            if(freq[z])
            {
                freq[z]--;
            }
            else if(freq[k-z]){
                freq[k-z]--;
            }
        }

        // int n; int k;
        // cin >> n >> k;
        // vector<int> a(n), b(n);
        // for (auto &x : a) cin >> x;
        // for (auto &x : b) cin >> x;

        // if (k == 0) {
        //     if(a==b) yes;
        //     else no;
        //     continue;
        // }

        // unordered_map<ll, ll> freq; 
        // for (int v : a) {
        //     int r = ((v % k) + k) % k;
        //     freq[min(r, k - r)]++;
        // }
        // for (int v : b) {
        //     int r = ((v % k) + k) % k;
        //     freq[min(r, k - r)]--;
        // }

         bool same = true;
         for (auto &p : freq) {
         if (p.second != 0) { same = false; break; }
         }
        if(same) yes;
         else no;
    }
}
