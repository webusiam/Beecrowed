#include<stdio.h>
int main(){
char name[30];
double Salary, Sell, TOTAL;
gets(name);
scanf("%lf %lf", &Salary, &Sell);
TOTAL = Salary+(Sell*15)/100;
printf("TOTAL = R$ %.2lf\n", TOTAL);
return 0;
}
