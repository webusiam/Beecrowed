#include<stdio.h>
#include<math.h>
int main(){
double V,D,area,altura;
while(scanf("%lf %lf",&V,&D)!=EOF){
    area=3.14*pow((D/2),2);
altura=V/area;
printf("ALTURA = %.2lf\n",altura);
printf("AREA = %.2lf\n",area);}
return 0;
}
