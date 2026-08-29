#include<stdio.h>
int main(){
double hours,km;
scanf("%lf %lf",&hours, &km);
printf("%.3lf",(hours*km)/12);
return 0;
}
