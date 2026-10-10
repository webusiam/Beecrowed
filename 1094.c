#include<stdio.h>
int main(){
int N,total=0,coelho=0,ratos=0,sapos=0,amount;
scanf("%d",&N);
for(int i=1;i<=N;i++)
{   int Amount;
     char x;
    scanf("%d",&Amount);
    scanf("%d",x);
if(x== 'C'){
        total=coelho+amount;

    printf("Total de coelhos: %d",total);
}
else if(x=='R'){
         total=ratos+amount;

    printf("Total de ratos: %d",total);

}
else if(x=='S'){
         total=sapos+amount;

    printf("Total de sapos: %d",total);

}
}
return 0;
}
