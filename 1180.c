#include<stdio.h>
int main(){
int N;
scanf("%d",&N);
int X[N];
for(int i=0;i<N;i++){
    scanf("%d",&X[i]);}
int min=X[0];
int position=0;
for(int i=1;i<N;i++){
if(X[i]<min){
    min=X[i];
    position=i;}}
    printf("Menor valor: %d\n",min);
    printf("Posicao: %d\n",position);
    return 0;
}
