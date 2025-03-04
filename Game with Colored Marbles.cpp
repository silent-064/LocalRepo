#include<bits/stdc++.h>
using namespace std;
int main(){
int a;
cin>>a;
while(a--)
{
int b,i;
cin>>b;
int freq[b+1]={0};
int x[b+1];
for(i=0; i<b; i++)
{
cin>>x[i];
freq[--x[i]]++;
}
int count=0; int uncount=0;
for(i=0; i<b; i++)
{
    if(freq[i]==1)
    {
        count++;
    }
    else if(freq[i]>1)
    {
        uncount++;
    }
}
cout<<uncount+(count+1)/2*2<<endl;
}






    return 0;
}