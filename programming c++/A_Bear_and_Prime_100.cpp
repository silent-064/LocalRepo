// /*
//  * Author : Protic Prappo Durjoy
//  * Date :
//  */
// #include <bits/stdc++.h>
// #define endl "\n"
// #define yes cout << "YES\n"
// #define no cout << "NO\n"
// #define ft float
// #define du double
// #define ull unsigned long long
// #define ll long long
// const ll INF = 1e9 + 7;
// const ll mod = 998244353;
// using namespace std;
// string query(ll p){
//     cout<<p<<endl;
//     cout.flush();
//     string s1;
//     cin>>s1;
//     return s1;
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//  vector<ll>primes={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
//  ll cnt=0;
//  bool composite=false;
//  for(ll p:primes){
//      if(query(p)=="yes"){
//     cnt++;
//     if(p*p<=100){
//         if(query(p*p)=="yes"){
//             composite=true;
//         }
//     }
//  }
//  }
// if(cnt>=2||composite){cout<<"composite"<<endl;}
// else{cout<<"prime"<<endl;}
// cout.flush();

  
// }
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

string query(ll p){
    cout << p << endl;
    cout.flush();
    string s;
    cin >> s;
    return s;
}
int main()
{
  int a,i;
    vector<bool> chk(51, true);
    chk[0] = chk[1] = false;
    vector<ll> prime;

    for(i=2; i<=50; i++){
        if(chk[i]){
            prime.push_back(i);
            for(int j=i*i; j<=50; j+=i) chk[j]=false;
        }
    }

    ll cnt=0;

    for(i=0; i<prime.size(); i++){
        string s1 = query(prime[i]);
        if(s1=="yes"){
            cnt++;
            if(prime[i]*prime[i] <= 100){
                string s2 = query(prime[i]*prime[i]);
                if(s2=="yes") cnt++;
            }
        }
        if(cnt >= 2) {
            cout << "composite" << endl;
            cout.flush();
            return 0;
        }
    }

    cout << "prime" << endl;
    cout.flush();
}