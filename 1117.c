#include<stdio.h>
int main(){
double a,b;
while(1){
scanf("%lf",&a);
if(a>=0 && a<=10)
{
    break;}
    else {
       printf("nota invalida\n");

}}
while(1){
scanf("%lf",&b);
if(b>=0 && b<=10){
    break;
}
else
   {
    printf("nota invalida\n");
    }
}
printf("media=%.2lf\n",((a+b)/2));
return 0;
}
