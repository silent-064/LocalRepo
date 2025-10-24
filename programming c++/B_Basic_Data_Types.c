#include<stdio.h>
int main()
{
    int a;
    long long b;
    char ch;
    float f;
    double d;
    scanf("%d",&a);
    scanf("%lld",&b);
    scanf(" %c",&ch);
    scanf("%f",&f);
    scanf("%lf",&d);
    printf("%d\n",a);
    printf("%lld\n",b);
    printf("%c\n",ch);
    printf("%g\n",f);
    printf("%g\n",d);
}