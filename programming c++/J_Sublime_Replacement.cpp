#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
   vector<long long>b;
   b.push_back(a[0]);
   long long s=0,f=0;
   for(int i=1;i<n;i++){
        if(a[i]==-1){
                a[i]=1000000000;
        }
    if(a[i-1]<=a[i]&&f==0){
            s+=a[i]+a[i-1];
   f=1;
            }else if(a[i-1]<=a[i]){
            s+=a[i];
            }else{
    b.push_back(s);
    s=0;
    f=0;
    }
   }
   if(s!=0){
    b.push_back(s);
    s=0;
   }
   for(int i=0;i<b.size();i++){
    s+=b[i];
   }
   sort(b.begin(),b.end());
   cout<<b[b.size()-1]<<endl;
}


}