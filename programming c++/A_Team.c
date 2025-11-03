#include<stdio.h>
int main()
{
long long a;
scanf("%lld",&a);
long long cnt=0;
while (a--)
{long long sum=0;
long long b,c,d;
scanf("%lld %lld %lld",&b,&c,&d);
sum=b+c+d;
if(sum>=2)cnt++;
}
printf("%lld",cnt);



    return 0;
}