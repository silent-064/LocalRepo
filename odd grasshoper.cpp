/*
 * Author : Protic Prappo Durjoy
 * Date : 20/3/25
 */
#include<bits/stdc++.h>
using namespace std;
long long solve(long long bnot, long long c) {
    long long d=0;
  if(c%4==0)d=0;
  else if (c % 4 == 1) d = c;
  else if (c % 4 == 2) d = -1;
  else d = -c - 1;

  return (bnot % 2 == 0) ? (bnot - d) : (bnot+ d);
    return bnot; 
}

int main()
{
ios::sync_with_stdio(false),cin.tie(0);
int a;
cin>>a;
while(a--)
{

    long long  bnot, c;
    cin >> bnot >> c;
    cout << solve(bnot, c) << endl; 



}






    return 0;
}
