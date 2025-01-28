#include<stdio.h>
int main()
{
int a,i;
long long x;
scanf("%d" ,&a);
for(i=0; i<a; i++)
{
scanf("%lld" ,&x);
int count1=0,count2=0,count3=0;
while(x%2==0)
{
    x/=2;
    count1++;
}
while(x%3==0)
{x/=3;
count2++;}
while(x%5==0)
{x/=5;
count3++;}
if(x!=1)
{
    printf("-1\n");
}

else

{
    int total=count1+ 2*count2 + count3*3;
    
    printf("%d\n" ,total);
}
}







    return 0;
}