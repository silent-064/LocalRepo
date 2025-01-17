#include<stdio.h>
int main()
{
  int a,b,c,x;
  scanf("%d" ,&a);
  while(a--)
  {
    scanf("%d %d" ,&b ,&c);
    if(b>=c)
    {
       x=b-c;
    }
       else if(b<c)
    {
       x=c-b;
    }
    printf("%d\n" ,x);
  }



    return 0;
}