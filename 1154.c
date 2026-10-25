#include<stdio.h>
int main(){
double n,sum=0,count=0;
while(1){
    scanf("%lf",&n);
    if(n<0){
            break;
        }
    sum=sum+n;
    count++;

}
printf("%.2lf\n",sum/count);
return 0;
}




