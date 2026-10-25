#include<stdio.h>
#include<string.h>
int main(){
int m,n;
scanf("%d %d",&m,&n);
for(int i=0;i<n;i++){
        char x[20];
    scanf("%s",x);
    if(strcmp(x,"fechou")==0){
        m++;
    }
    else if(strcmp(x,"clicou")==0){
        m--;
    }
}
printf("%d\n",m);
return 0;
}
