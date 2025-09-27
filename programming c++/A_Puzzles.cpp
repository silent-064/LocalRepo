/*
 * Author : Protic Prappo Durjoy
 * Date :
 * copy from others///////
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
  int a,x,i,b[100],s=1000;cin>>a;cin>>x;
	for(i=0;i<x;i++)cin>>b[i];sort(b,b+x);
	for(i=0;i+a-1<x;i++)s=min(s,b[i+a-1]-b[i]);
	cout<<s;
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
// const ll INF = 1e9 + 7;
// const ll mod = 998244353;
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     int a, i;
//     cin >> a;
//     // while (a--)
//     // {
// ll b,c,j;
// cin>>b>>c;
// vector<ll>x(c);
// for(i=0; i<c; i++)
// {
//     cin>>x[i];
// }
// sort(x.begin(),x.end());
// ll minu=1000;
// ll cnt;
// for(i=0; i+b-1<c; i++)
// {
// cnt=x[i+b-1]-x[i];
// minu=min(cnt,minu);
// //     for(j=i; j<c; j++)
// //     {
// //         diff=x[j]-x[j+1];
// //         cnt+=diff;
// // z++;
// // if(z==3)
// // {
// // z=0;
// // break;
// // }
// // }


// }
// cout<<minu<<endl;


//     }
// // }