#include<stdio.h>
int main(){
int N,x;
scanf("%d",&N);
for(int i=0;i<N;i++){
scanf("%d",&x);
 if(x==0)
{
printf("NULL\n");
}
else if(x%2==0){
        if(x<0 ){
printf("EVEN NEGATIVE\n");}
else{
printf("EVEN POSITIVE\n");}
}
else{
        if(x>0){
printf("ODD NEGATIVE\n");}
else{
printf("ODD POSITIVE\n");}
}
}
return 0;
}
