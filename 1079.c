#include<stdio.h>
int main(){
int N;
scanf("%d",&N);
double A,B,C,avg;
for(int i=0;i<N;i++){
scanf("%lf %lf %lf",&A, &B,&C);
avg=(A*2+B*3+C*5)/10;
printf("%.1lf\n",avg);
}
return 0;
}

