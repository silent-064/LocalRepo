#include<stdio.h>
int main()
{
    int x,i;
scanf("%d" ,&x);
while(x--)
{int a;
scanf("%d" ,&a);
char s[a+1];
scanf("%s" ,&s);
int ballons=0;
int solve[26]={0};
for(i=0; i<a; i++)
{
int problem=s[i]-'A';
if(solve[problem]==0)
{
 ballons+=2;
 solve[problem]=1;
}
else
{
    ballons++;
}

}
printf("%d\n" ,ballons);


}
    return 0;
}