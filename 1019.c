#include<stdio.h>
int main(){

int N,hour,minute,seconds,extra;
scanf("%d",&N);
hour=N/3600;;
extra=N%3600;
minute=extra/60;
seconds=extra%60;
printf("%d:%d:%d\n",hour,minute,seconds);
return 0;

}
