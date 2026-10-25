#include<stdio.h>
int main(){
int x;
while(x--){
    scanf("%d",&x);

    if(x==0){
        break;
    }
    if(x%2!=0){
        x++;
    }
    int sum=0;
    for(int i=1;i<=5;i++){
        sum=sum+x;
        x=x+2;
    }
    printf("%d\n",sum);

}

}
