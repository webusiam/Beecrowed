#include<stdio.h>
int main(){
int T,count=0;
scanf("%d",&T);
for(int i=1;i<=5;i++){
        int num;
    scanf("%d",&num);
if(T==num){
    count++;
}
}
printf("%d",count);
return 0;
}
