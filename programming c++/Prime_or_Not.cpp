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
#define N 1000000
const ll INF = 1e9 + 7;
const ll mod = 998244353;
using namespace std;
vector<ll>allprime(N+1,1);//milesrobin
void sieve() {
    allprime[0]=allprime[1]=0;
    for (ll i=2; i*i<=N; i++) {
        if (allprime[i]) {
            for (ll j=i*i; j<=N; j+=i) {
                allprime[j]=0;
            }
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //sieve();

    int t,i;
  
    cin >> t;
    while (t--) {
        ll x;
          ll cnt=0;
        cin >> x;
       for(i=1; i*i<=x; i++)
       {
        if(x%i==0)
        {
            cnt++;
            if(x/i!=i)
            {
                cnt++;
            }
        }
        if(cnt>2)break;
       }
       if(cnt<=2)yes;
        else no;
    }

    return 0;
}
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
// #define N 100000
// const ll INF = 1e9 + 7;
// const ll mod = 998244353;
// using namespace std;
// void primeSieve(vector<int> &sieve){

// 	//Mark 1 and 0 as not prime
// 	sieve[1] = sieve[0] = 0;

// 	// // Initially you can say I will just mark all odd numbers as prime
// 	// for(int i=3; i<=N; i+=2){
// 	// 	sieve[i] = 1;
// 	// }

// 	//start from 3 and mark all multiples of given i (prime) as not prime
// 	for(ll i=2; i<=N; i++){	
// 		if(sieve[i]){
// 			for(ll j = i*i; j<=N; j = j + i){
// 				//marking j as not prime
// 				sieve[j] = 0;
// 			}
// 		}
// 	}
// }


// int main(){

// 	vector<int> sieve(N+1,1); //fill constructor
// 	primeSieve(sieve);
// if(sieve[5])yes;
// else no;
// 	// for(int i=0; i<=1000; i++){
// 	// 	if(sieve[i]){
// 	// 		cout<<i <<" ";
// 	// 	}
// 	// }
	

// 	return 0;
// }