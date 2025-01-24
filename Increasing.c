#include<stdio.h>
int main()
{
int a,i,j;
scanf("%d" ,&a);
while(a--)
{
int x;
scanf("%d" ,&x);
int y[x+1];
for(i=0; i<x; i++)
{
scanf("%d",&y[i]);

}
for(i=0; i<x-1; i++)
{
for(j=0; j<x-i-1; j++)
{
    if(y[j]>y[j+1])
    {
        int temp=y[j];
        y[j]=y[j+1];
        y[j+1]=temp;
    }
}
}
int increase=1;
for(i=1; i<x; i++)
{
    if(y[i]<=y[i-1])
    {
        increase=0;
        break;
    }
}
if(increase)
{
    printf("YES\n");
}
else
{
    printf("NO\n");
}
}





    return 0;
}