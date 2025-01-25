#include<stdio.h>
int main()
{
int a,i,count=0;
scanf("%d" ,&a);
while(a--)
{
int x;
scanf("%d" ,&x);
int y[x];
int found=0,max;
for(i=0; i<x; i++)
{
    scanf("%d" ,&y[i]);
    if(y[i]==0)
    {
        count++;
        if(max<count)
    {
        max=count;
    }
      
    }
    else
    {
        count=0;
    }
    
} 
printf("%d\n" ,max);

}





    return 0;
}