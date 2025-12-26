#include<stdio.h>
#include<math.h>
int main()
{

float result,a,sub;

scanf("%f",&a);
result=floor(a);
sub=a-result;
if(a==result)
printf("int %.0f",result);
else if(a > result)
printf("float %.0f %.3f",result,sub);


return 0;

}