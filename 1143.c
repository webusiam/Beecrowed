#include<stdio.h>
int main(){
int N;
scanf("%d",&N);
if(N<1000 && N>1){
for(int i=1;i<=N;i++)
{
    printf("%d %d %d\n",i,i*i,i*i*i);
}
}
return 0;

}
