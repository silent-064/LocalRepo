#include<stdio.h>
int main()
{
int a;
scanf("%d" ,&a);
while(a--)
{
long long b,c,x,sum;
scanf("%lld %lld %lld" ,&b ,&c ,&x);
sum=(b+c+x)/2;
printf("%lld\n" ,sum);




}

 




    return 0;
}