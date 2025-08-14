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
ll b,c,d;
cin>>b>>c>>d;
ll ans=((c*(c+1))/2);
ll ans1=((b*(b+1))/2)-(((b-c)*(b-c+1))/2);
if(d>=ans){
    if(d<=ans1)yes;
    else no;
}
else no;



    }
}