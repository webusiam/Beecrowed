
#include<stdio.h>
#include<stdlib.h>
int main(){
int i, M,N,Sum;
while(1){
        scanf("%d %d",&M,&N);
if(M<=0 || N<=0)
{
    exit(0);
}
if(M>N){
    i=M;
    M=N;
    N=i;
}
Sum=0;
for(i=M;i<=N;i++){
    Sum=Sum+i;
    printf("%d ",i);}
printf("Sum=%d\n",Sum);
}
return 0;
}
