#include<bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
long long c=0;
while(t--){
        c++;
        long long n,q;
cin>>n>>q;
long long a[n];
    for(long long i=0;i<n;i++){
        cin>>a[i];
    }
    for(long long i=0;i<q;i++){
        long long l,r,m;
        cin>>l>>r>>m;
        for(long long j=l-1;j<r;j++){
            a[j]=(a[j]/m);
        }
    }
    cout<<"Case"<<" "<<c<<":"<<" ";
    for(long long i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
   cout<<endl;
}
}