#include<stdio.h>
int main()
{
int i,a,y,x[100000];
scanf("%d" ,&a);
for(i=0; i<a; i++)
{
scanf("%d",&x[i]);

}
for(i=0; i<a; i++)
{
if(x[i]%2==0)
{
    y=(x[i]/2)-1;
}
if(x[i]%2!=0)
{
    y=x[i]/2;
}
printf("%d\n",y);

}







    return 0;
}