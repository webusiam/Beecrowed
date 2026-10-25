#include<stdio.h>
int main(){
int a,n;
scanf("%d %d",&a,&n);
while(n<0 || n==0){
    scanf("%d",&n);
}
int sum=0;
for(int i=1;i<=n;i++){
    sum=sum+a;
    a++;
}
printf("%d\n",sum);
return 0;
}
