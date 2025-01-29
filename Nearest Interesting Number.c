#include<stdio.h>
int main()
{
int a,i,sum=0,x;
scanf("%d" ,&a);
int swap=a;
while(1)
{
int tempo=swap;
sum=0;
while(tempo>0)
{
    x=tempo%10;
    sum+=x;
    tempo/=10;
    
}

    if(sum%4==0)
{
printf("%d\n" ,swap);
break;
}


swap++;
}







    return 0;
}