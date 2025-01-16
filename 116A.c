#include<stdio.h>
int main()
{
int a,x,i,y;
int current_passengers=0,max_passenger=0;
scanf("%d",&a);
for(i=0; i<a; i++)
{

scanf("%d %d" ,&x ,&y);
current_passengers-=x;
current_passengers+=y;
if(current_passengers > max_passenger)
{
    max_passenger=current_passengers;

}

}
printf("%d\n",max_passenger);





    return 0;
}