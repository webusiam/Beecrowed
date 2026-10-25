#include<stdio.h>
int main(){
int a,b,max;
while(scanf("%d",&a)!=EOF){
        max=0;
    for(int i=1;i<=a;i++){
        scanf("%d",&b);
    if(b>max){
        max=b;
    }
    }
    if(max<10){
            printf("1\n");}
    if(max>=10 &&max<20){
        printf("2\n");}
    if(max>=20){
        printf("3\n");}
    }
return 0;
}
