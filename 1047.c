#include<stdio.h>
int main(){
int a,b,c,d,hour,minute;
scanf("%d %d %d %d",&a, &b, &c, &d);
if(a<c && b<d){
        hour=c-a;
        minute=d-b;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",hour,minute);}
else if(a==c && b==c){
    printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)");
}
else if(a<c && b>d){

    HOUR
    printf("O JOGO DUROU 0 HORA(S) E 59 MINUTO(S)");
}
return 0;
}
