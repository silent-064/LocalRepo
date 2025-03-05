#include <bits/stdc++.h>
using namespace std;

void solve()
{
int x,i;
cin>>x;
int b[x+1];
for(i=1; i<=x; i++)
{
    cin>>b[i];
}
for(i=1; i<=x; i++)
{
    if(b[i]==i) continue;
    if(i<x && b[i]==i+1 && b[i+1]==i)
    {
        swap(b[i],b[i+1]);
    }
    else
    {
        cout<<"No"<<endl;
        return;
    }
}
cout<<"Yes"<<endl;
}

int main() {
    int a;
    cin >> a;
    while (a--) {
        solve();
    }
    return 0;
}
