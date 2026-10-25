#include<stdio.h>
int main(){
double M[12][12],sum=0.0;
int i,j,C;
char x;
scanf("%d %c",&L,&x);
for(i=0;i<12;i++){
    for(j=0;j<12;j++)
        scanf("%lf",&M[i][j]);}
    for(i=0;i<12;i++){
        sum+=M[i][C];
    }
    if(x=='S')printf("%.1lf\n",sum);
    else if(x=='M') printf("%.1lf\n",sum/12);

return 0;
}
