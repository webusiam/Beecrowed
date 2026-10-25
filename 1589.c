#include<stdio.h>
int main(){
int N, radious;
scanf("%d",&N);
while(N--){
    int R1,R2;
    scanf("%d %d",&R1,&R2);
    radious=R1+R2;
    printf("%d\n",radious);
}
return 0;
}

