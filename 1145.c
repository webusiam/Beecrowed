#include<stdio.h>
int main(){
int X,Y;
scanf("%d %d",&X,&Y);
if(X<20 && X>1 && X<Y && Y<100000){
for(int i=1;i<=Y;i++){
        printf("%d",i);
        if(i%X==0){
            printf("\n");}
        else{
            printf(" ");
        }
}
}
return 0;


}

