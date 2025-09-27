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
void setithbit(int &a,int b){
    int x=a|(1<<b);
    cout<<x;
}
void getithbit(int &a,int b)
{
int x=(a>>b)&1;
 cout<<x;
}
void clearithbit(int &a,int b)
{
    int x=a & ~(1<<b);
    cout<<x; 
}
void updateithbit(int &a,int b,int i)
{
int x=(a& ~(1<<b))|(i<<b);
    cout<<x;
}
void clearlastithbit(int &a,int b)
{
      int x=(-1<<b);
  a=a&x;
  cout<<a;
}
void clearBitsInRange(int &a,int i,int j)
{
    int x=~0<<j+1;
    int y=(1<<i)-1;
    int mask=x|y;
    a=a&mask;
   // cout<<a;
}
void replacebits(int &a,int i,int j,int m)
{
    clearBitsInRange(a,i,j);
    int mask=m<<i;
a=a|mask;
cout<<a;
}
void countbits(int &a)
{ll cnt=0;
    while(a>0)
    {
cnt+=(a&1);
a=a>>1;
    }
cout<<cnt;
}
int count_bits_hack(int &a)
{
    ll cnt=0;
    while(a>0)
    {
        a=a&(a-1);
        cnt++;
    }
}
void convert_into_binary(int &a)
{
    ll ans=0;
    ll p=1;
    while(a>0)
    {ll lastbit=(a&1);
        ans+=p*lastbit;
        p*=10;
        a=a>>1;

    }
    cout<<ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a=10;
    //countbits(a);
convert_into_binary(a);
    
  

}