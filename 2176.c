#include<stdio.h>
int main(){
int n,digit,count=0;
scanf("%d",&n);
printf("%d",n);
while(n>0){
digit=n%10;
if(digit==1){
    count++;
}
n=n/10;
}
if(count%2==0){
printf("0\n");
}
else printf("1\n",n+0);

return 0;
}
