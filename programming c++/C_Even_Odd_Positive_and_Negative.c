#include<stdio.h>
int main()
{
int n,i=0;
scanf("%d",&n);
int even=0,odd=0,pos=0,neg=0;
while(n--){
int y;
    scanf("%d",&y);
    if(y%2==0){
even++;
    }
    else{
        odd++;
    }
    if(y>0)pos++;
    else if(y<0) neg++;
    

}
printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n",even,odd,pos,neg);





    return 0;
}