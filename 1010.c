#include<stdio.h>
int main(){
int number1,unit1;
double price1,total;
int number2,unit2;
double price2;
scanf("%d %d %lf",&number1, &unit1,&price1 );
scanf("%d %d %lf", &number2, &unit2, &price2);
total=unit1*price1+unit2*price2;
printf("VALOR A PAGAR: R$ %.2lf\n",total);
return 0;
}
