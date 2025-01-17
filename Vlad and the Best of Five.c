#include<stdio.h>
int main ()
{
   int a,count=0,disc=0;
   char b,c,d,e,f;
   scanf("%d" ,&a);
   while (a--)
   {
    scanf(" %c%c%c%c%c" ,&b ,&c ,&d ,&e ,&f);
    if(b=='A')
    {
        count++;
    }
        if(c=='A')
    {
        count++;
    }
        if(d=='A')
    {
        count++;
    }
        if(e=='A')
    {
        count++;
    }
        if(f=='A')
    {
        count++;
    }
        if(b=='B')
    {
        disc++;
    }
        if(c=='B')
    {
        disc++;
    }
        if(d=='B')
    {
        disc++;
    }
        if(e=='B')
    {
        disc++;
    }
        if(f=='B')
    {
        disc++;
    }
    int extra=count-disc;
    if(extra>0)
    {
        printf("A\n");
    }
    else if(extra<0)
    {
        printf("B\n");
    }
   }
   
  


    return 0;
}