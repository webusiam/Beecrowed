
#include<stdio.h>
int main(){

int N,year,month,day,ex;
scanf("%d",&N);
year=N/365;
ex=N%365;
month=ex/30;
day=ex%30;
printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",year,month,day);


return 0;

}
