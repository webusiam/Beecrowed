#include<stdio.h>
int main(){
double n,r;
scanf("%lf",&n);
if(n<=2000){
    printf("Isento\n");
}
else if(n<=3000){
        r=((n-2000)*0.08);
    printf("R$ %.2lf\n",r);
}
else if(n<=4500){
        r=((1000*0.08)+(n-3000)*0.18);
   printf("R$ %.2lf\n",r);
}
else if(n>4500){
    r=((1000*0.08)+(1500*0.18)+((n-4500)*0.28));
    printf("R$ %.2lf\n",r);
}
return 0;
}
