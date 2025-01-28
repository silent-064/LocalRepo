#include<stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
int a,i;
scanf("%d",&a);
char sh[a+1];
scanf("%s" ,sh);
int new_al[26]={0};
int count=0;
for(i=0; i<a; i++)
{
if(isalpha(sh[i]))
{
    char lower=tolower(sh[i]);
    if(new_al[lower-'a']==0)
    {
        count++;
        new_al[lower-'a']=1;
    }
}

}
if(count==26)
{
    printf("YES\n");
}
else
printf("NO\n");


    return 0;
}