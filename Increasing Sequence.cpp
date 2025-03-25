/*
 * Author : Protic Prappo Durjoy
 * Date : 25/3/25
 */
#include<bits/stdc++.h>
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ft float
#define du double
#define ull unsigned long long
using namespace std;
void solve(vector<int>&c,int a,int b)
{int count=0;
    int i;
    for(i=1; i<a; i++)
{
    if(c[i]<=c[i-1])
    {
        int sub=c[i-1]-c[i];
        int moves=(sub/b)+1;
        c[i]+=moves*b;
        count+=moves;
    }
}

cout<<count<<endl;

}
int main()
{    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
int a,b,i;
cin>>a>>b;
vector<int>c(a);
for(i=0; i<a; i++)
{
    cin>>c[i];

}
solve(c,a,b);





    return 0;
}