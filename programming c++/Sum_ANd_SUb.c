#include<stdio.h>
int main(){
long long x;
scanf("%lld",&x);
while(x--){
    long long a,b,c;
scanf("%lld %lld %lld",&a,&b,&c);
if(a+b==c){
    printf("+\n");
}
else if(a-b==c){
    printf("-\n");
}

}




}