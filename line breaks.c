#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
int a,b,c,i,length,max,count;;
scanf("%d" ,&a);
while(a--)
{
scanf("%d %d" ,&b ,&c);
char ch[b][11];
max=0;
count=0;
for(i=0; i<b; i++)
{
    scanf("%s" ,ch[i]);

}
for(i=0; i<b; i++)
{
   length=strlen(ch[i]);
  
   if(max+length<=c)
   { max+=length;
    count++;
    
   }
else
break;
}
printf("%d\n" ,count);
}



    return 0;
}