#include<stdio.h>
int main(){
double n,count=0,sum=0;
for(int i=1;i<=6;i++){
scanf("%lf",&n);
if(n>0){
count++;
sum=sum+n;
}
}
printf("%.0lf valores positivos\n",count);
printf("%.1lf",sum/count);
return 0;
}
