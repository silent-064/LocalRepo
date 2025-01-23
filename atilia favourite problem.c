#include<stdio.h>
int main()
{
int a,x,i;
scanf("%d" ,&a);
while(a--)
{
scanf("%d" ,&x);
char inpu[x+1];
scanf("%s" ,&inpu);
int max_ch='a';
for(i=0; i<x; i++)
{
if(inpu[i]>max_ch)
{
    max_ch=inpu[i];
}

}
printf("%d\n" ,max_ch - 'a'+1);
}







}