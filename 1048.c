#include<stdio.h>
int main(){
double n;
scanf("%lf",&n);
if(n<=400){

    printf("Novo salario: %.2lf\n",(n*.15)+n);
    printf("Reajuste ganho: %.2lf\n",(n*.15));
    printf("Reajuste ganho: 15%\n");}

else if(n<=800){
    printf("Novo salario: %.2lf\n",(n*.12)+n);
    printf("Reajuste ganho: %.2lf\n",(n*.12));
    printf("Reajuste ganho: 12%%\n");}
else if(n<=1200){
    printf("Novo salario: %.2lf\n",(n*.10)+n);
    printf("Reajuste ganho: %.2lf\n",(n*.10));
    printf("Reajuste ganho: 10%%\n");}
else if(n<=2000){
    printf("Novo salario: %.2lf\n",(n*.07)+n);
    printf("Reajuste ganho: %.2lf\n",(n*.07));
    printf("Reajuste ganho: 7%%\n");}
else if (n>2000)
    {
    printf("Novo salario: %.2lf\n",(n*.04)+n);
    printf("Reajuste ganho: %.2lf\n",(n*.04));
    printf("Reajuste ganho: .4%%\n");

}
}
