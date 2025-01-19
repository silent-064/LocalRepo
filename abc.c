#include<stdio.h>
int main()
{
 int a;
 scanf("%d" ,&a);
 while(a--)
 {
  char c [10];
  scanf("%s" ,&c);
  if(c=="abc" || c=="acb" || c=="bac" || c=="cba")
   printf("YES");
  else
  printf("NO"); 



 }



    return 0;
}