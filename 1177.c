#include<stdio.h>
int main(){
int T,N[1000];
scanf("%d",&T);
int val=0;
for(int i=0;i<1000;i++){
    N[i]=val;
    val++;
    if(val==T){
        val=0;}}
        for(int i=0;i<1000;i++){
    printf("N[%d] = %d\n",i,N[i]);}
return 0;
}



