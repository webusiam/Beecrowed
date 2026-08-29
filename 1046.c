#include<stdio.h>
int main(){
int start,end,duration;
scanf("%d %d",&start,&end);
if(start==end)
    {
    printf("O JOGO DUROU 24 HORA(S)\n");
}
else if(start<end)
{
 printf("O JOGO DUROU %d HORA(S)\n",end-start);
}
else if(start>end)
{
    printf("O JOGO DUROU %d HORA(S)\n",(end+24)-start);
}
return 0;

}
