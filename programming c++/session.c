#include<stdio.h>
int main(){
int number,sum=0;
int i=1;
while(i<=50)
{
printf("Enter a number: ");
scanf("%d",&number);
if(number==0){
    break;
}
else if(number<0)
{
    continue;
}
else if(number>=50)
{
    break;
}
sum+=number;
}
printf("less then 50:%d\n",sum);
// for(i=0; i<=8; i--)
// {
// printf("%d\n",i);
// }
// printf("1 Hello\n");
// printf("2 Exit\n");
// printf("3 No\n");
// printf("Enter a number: ");
// scanf("%d",&i);
// switch(i){
//     case 1:
//     printf("Hello\n");
//     break;
//     case 2:
//     printf("Exit\n");
//     break;
//     case 3:
//     printf("No\n");
//     break;
// }


    return 0;
}