#include<stdio.h>
int main()
{
int a;
scanf("%d" ,&a);
while(a--)
{
    int b;
    scanf("%d" ,&b);
    int array[b+1];
    int i;
    int sum=0;
    for(i=0; i<b; i++)
    {
     scanf("%d" ,&array[i]);
    }
    for(i=0; i<b; i++)
    {
        if(i%2==0)
        {
          sum+=array[i];
        }
        else
        {
            sum-=array[i];
        }
    }
    printf("%d\n" ,sum);
}






    return 0;
}