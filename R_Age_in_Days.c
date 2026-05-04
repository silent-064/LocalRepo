#include<stdio.h>
int main(){

long long a,modd,y,m,d;
scanf("%lld",&a);
 y=a/365;
 long long need;
 need=y*365;
 a=a-need;
 m=a/30;
 long long need1;
 need1=m*30;
 a=a-need1;
 printf("%lld years\n%lld months\n%lld days",y,m,a);

// modd=a%365;
// m=modd/30;
// d=modd%30;
// printf("%lld years\n%lld months\n%lld days",y,m,d);




    return 0;
}