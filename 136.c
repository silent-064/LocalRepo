#include<stdio.h>
int main()
{
int a,i;
scanf("%d" ,&a);
int b[a],ans[a];
for(i=0; i<a; i++)
{
scanf("%d",&b[i]);
}
for(i=0; i<a; i++)
{
    ans[b[i]-1]=i+1;

} 
for(i=0; i<a; i++)
{

    printf("%d ",ans[i]);
}



    return 0;
}