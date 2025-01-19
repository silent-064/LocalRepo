#include<stdio.h>
int main()
{
int a,d;
scanf("%d" ,&a);
while(a--)
{
scanf("%d",&d);
if(d<=1399)
{
    printf("Division 4\n");
}
if(d>=1900)
{
    printf("Division 1\n");
}
if(d>=1400 && d<=1599)
{
    printf("Division 3\n");
}
if(d>=1600 && d<=1899)
{
    printf("Division 2\n");
}

}





    return 0;
}