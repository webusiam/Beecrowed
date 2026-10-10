#include<stdio.h>
int main(){
int N;
scanf("%d",&N);
int m,n,i,k;
for(i=1;i<=N;i++){
scanf("%d %d",&m,&n);
int sum=0;
if(m>n){
    int temp=m;
    m=n;
    n=temp;
}
for(k=m+1;k<n;k++){
if(k%2!=0){
    sum=sum+k;
}
}

printf("%d\n",sum);}
return 0;


}
