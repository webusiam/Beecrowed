#include<stdio.h>
int main(){
int a,b,q,r;
scanf("%d %d",&a,&b);
r=a%b;
if(r<0)
q=(a-r)/b;
printf("%d %d",q,r);

return 0;
}
