#include<stdio.h>
#include<stdlib.h>
int main()
{
int a;
scanf("%d" ,&a);
while(a--)
{
    int x,i,j[10000],count;
    scanf("%d",&x);
    for(i=0; i<x; i++)
    {
      scanf("%d" ,&j[i]);

    }
    for(i=0; i<x-1; i++)
    {
        count=0;
        int some=abs(j[i]-j[i+1]);
        if(some==5 || some==7)
        {
            count=1;
        }
        else{
            count=0;
            break;
        }


    }
    if(count==1)
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