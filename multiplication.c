#include<stdio.h>
int main()
{
 int a,b,x;
 int temp=0;
 scanf("%d %d" ,&a ,&b);
 while(a--)
 {
scanf("%d" ,&x);
if(x<=b)
{
 temp+=1;   
} 
else if(x>b)
{
    temp+=2;
}

 }
printf("%d",temp);




    return 0;
}