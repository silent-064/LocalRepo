#include<stdio.h>
#include<stdlib.h>
int main()
{
int a;
scanf("%d" ,&a);
while(a--)
{
int x,sum=0;
scanf("%d" ,&x);
int b[x+1];
for(int i=0; i<x; i++)
{
scanf("%d" ,&b[i]);
sum+=abs(b[i]);
}

printf("%d\n" ,sum);



}





    return 0;
}