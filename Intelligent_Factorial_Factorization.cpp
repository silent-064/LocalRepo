/*
 * Author  : Protic Prappo Durjoy
 * Platform: Codeforces
 * Problem : 
 * Date    :
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
const int N = 1e6 + 9;
int spf[N];
ll factorial(ll n){
    ll i=1;
    ll fact=1;
    for(i=1; i<=n; i++){
      fact*=i;
    }
    return fact;
    //cout<<fact<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t,i;
    cin >> t;
     for (int i = 2; i < N; i++) {
    spf[i] = i;
  }
  for (int i = 2; i < N; i++) {
    for (int j = i; j < N; j += i) {
      spf[j] = min(spf[j], i);
    }
  }ll j=1;
    while (t--)
    { ll n;
        cin>>n;
        ll fact=factorial(n);
        vector<ll>ans;
        set<ll>s;
        map<ll,ll>freq;
    while (fact > 1) {
        //cout<<spf[fact]<<endl;
     
      freq[spf[fact]]++;
     
      if(!s.count(spf[fact])){
         ans.push_back(spf[fact]);
      } 
      s.insert(spf[fact]);
      fact/= spf[fact];
    }
    cout<<"Case "<<j<<": "<<n<<" = ";
    ll si=ans.size(); 
    for(i=0; i<ans.size(); i++){
     cout<<ans[i]<<" ("<<freq[ans[i]]<<")";
     if(i<si-1){cout<<" * ";}
    }
    cout<<endl;
    j++;
    }
}