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
ll solve(ll a, ll b) {
    while (b) {
        ll t = a % b;
        a = b;
        b = t;
    }
    return a >= 0 ? a : -a;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a,i; 
    cin >> a;
    while (a--)
    {
        ll n,k;
        cin >> n >> k;
        vector<ll> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
		for(int i=0,x;i<n;i++)
			cout<<arr[i]+(arr[i]%(k+1))*k<<' ';
		cout<<endl;
	}
}
       

