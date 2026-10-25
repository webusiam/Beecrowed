#include<stdio.h>
int main(){
int m;
scanf("%d",&m);
for(int i=1;i<=m;i++){

    if(m%i==0)
        printf("%d\n",i);
}
return 0;
}
