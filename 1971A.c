#include<stdio.h>
int main()
{
    int a,x,y;
    scanf("%d",&a);
    while(a--)
    {
scanf("%d %d" ,&x ,&y);
if(x>y)
{
    printf("%d %d\n" ,y,x);
}
else if(y>=x)
{
    printf("%d %d\n" ,x,y);
}




    }

 





    return 0;
}