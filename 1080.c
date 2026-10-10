#include<stdio.h>
int main(){
int x,max,position;
scanf("%d",&x);
max=x;
position=1;
for(int i =2; i<=100;i++){
scanf("%d",&x);
if(x>max){
max=x;
position=i;
}
}
printf("%d\n",max);
printf("%d\n",position);

return 0;
}
