#include<stdio.h>
int main()
{
  int x;
  scanf("%d",&x);
  for(int i=1; i<=x; i++)
  {
    for(int j=1; j<=i; j++)
    {
        printf("%c ",'A'+j-1);
    } 
    for(int j=i-1; j>=1; j--)
    {
        printf("%c ",'A'+j-1);
    }
    printf("\n");
  }






    return 0;
}