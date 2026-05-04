#include<stdio.h>
int main()
{
    long long X,Y,summation,multiplication,subtraction;
    scanf("%lld %lld",&X,&Y);
    summation = X+Y;
    multiplication = X*Y;
    subtraction = X-Y;
    printf("%lld + %lld = %lld\n",X,Y,summation);// X + Y = summation result
    printf("%lld * %lld = %lld\n",X,Y,multiplication);// X * Y = multiplication result 
    printf("%lld - %lld = %lld\n",X,Y,subtraction);// X - Y = subtraction result 
    return 0;
}