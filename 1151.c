#include<stdio.h>
int main(){
int n,a=0,b=1,temp,c;
scanf("%d",&n);
if(n<46){
    for(int i=1;i<=n;i++){
        printf("%d",a);
    if(i<n){
        printf(" ");
    }
        c=a+b;
        a=b;
        b=c;
    }
    printf("\n");
}

return 0;

}
