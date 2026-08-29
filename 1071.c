#include<stdio.h>
int main(){
int m,n,sum=0,temp;
scanf("%d %d",&m,&n);
if(m>n){
    temp=m;
    m=n;
    n=temp;
}
for(int i=m+1;i<n;i++)
{
    if(i%2!=0)
    sum=sum+i;}
    printf("%d\n",sum);

return 0;
}
