#include<stdio.h>
int main()
{
 int a,b,c,count=0;
 scanf("%d" ,&a);
 while(a--)
 {
 scanf("%d %d" ,&b ,&c);
 if(b<c-1)
 {
    count++;
 }
 }

printf("%d\n",count);




    return 0;
}