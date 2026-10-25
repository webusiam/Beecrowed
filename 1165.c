#include<stdio.h>
int main(){
int N;
scanf("%d",&N);
while(N--){
        int a,count=0;
        scanf("%d",&a);
        for(int i=1;i<=a;i++){
            if(a%i==0){
                count++;
            }
        }
          if(count<=2){
                printf("%d eh primo\n",a);
            }
            else {
                printf("%d nao eh primo\n",a);}
}
return 0;
}


