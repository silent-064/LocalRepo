#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
string ch;
cin>>ch;
int c=0;
for(int i=0;i<ch.size();i++){
    if(ch[i]=='0'&&ch[i+1]=='0'){
        c++;
        i++;
    }else if(ch[i]=='0'){
    c++;
    }
}
cout<<c<<endl;
}