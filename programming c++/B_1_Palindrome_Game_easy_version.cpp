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
bool check(string s){
    string s1=s;
    reverse(s1.begin(),s1.end());
    return s1==s;
    
}
// bool check(string s1,ll n){
//     ll low=0,hi=n-1;
//     while(low<=hi){
//         if(s1[low]!=s1[hi]){
//             return false;
//         }
//         else{
//             low++;
//             hi--;
//         }
//     }
// return true;
// }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, i;
    cin >> a;
    while (a--)
    {
ll n;
cin>>n;
string s1;
cin>>s1;
ll bob=0,alice=0;
bool ok;
ll cnt=0,j=0;
for(auto it:s1){
    if(it=='0')cnt++;
}
if(cnt&1 && cnt!=1){ok=true;}
else{ok=false;}
// for(i=0; i<n && cnt>0; i++){
//     if(check(s1) &&s1[i]=='0'){
// if(j%2==0){
// s1[i]='1';
// alice++;
// cnt--;
// ok=true;
// }
// if(j%2!=0){
//     s1[i]='1';
//     bob++;
//     cnt--;
//     ok=true;
// }
// j++;
//     }
// else if(ok){
//     reverse(s1.begin(),s1.end());
//     j++;
// ok=false;
//     }

// }
if(!ok)cout<<"BOB"<<endl;
else if(ok)cout<<"ALICE"<<endl;
else{
    cout<<"DRAW"<<endl;
}



    }
}