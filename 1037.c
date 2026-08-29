
#include<stdio.h>
int main(){
double F;
scanf("%lf",&F);
if(F<0 || F>100)
{
    printf("Fora de intervalo\n");
}
else if(F<=25)
{
    printf("Intervalo [0,25]\n");
}
else if(F<=50)
{
    printf("Intervalo (25,50]\n");
}
else if(F<=75){

    printf("Intervalo (50,75]\n");
}
else
{
    printf("Intervalo (75,100]\n");
}
return 0;
}

