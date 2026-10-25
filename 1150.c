#include<stdio.h>
int main(){
int x,z,count=0;
scanf("%d %d",&x,&z);
while(z<=x){
    scanf("%d",&z);
}
int sum=0;
for(int i=x;i<=z;i++){
    sum=sum+i;
    count++;
if(sum>=z)
{
    break;
}}
printf("%d\n",count);
return 0;
}
