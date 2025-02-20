#include<stdio.h>
int main()
{
int a,b,sum=0;
scanf("%d" ,&a);
while(a--)
{
    scanf("%d" ,&b);
    int x[101];

    for(int i=0; i<b; i++)
{
    scanf("%d" ,&x[i]);

}
for(int i=0; i<b; i++)
{
    if(i%2==0)
    {
        sum+=x[i];
    }
    else
    {
        sum-=x[i];
    }
}
printf("%d\n" ,sum);
}






    return 0;
}