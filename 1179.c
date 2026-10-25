#include<stdio.h>
int main(){
int N[15];
for(int i=0;i<15;i++){
    scanf("%d",&N[i]);
    if(N[i]%2==0){
        printf("par[%d] = %d\n",i,N[i]);}
        else{
        printf("impar[%d] = %d\n",i,N[i]);
    }
}
return 0;
}
