#include<stdio.h>
int main(){
int n;
double s=0;
scanf("%d",&n);
while(n--){
    int p,q;
    scanf("%d %d",&p,&q);
    if(p==1001){
            s+=q*1.50;
           }
    else if(p==1002){
            s+=q*2.50;
            }
   else if(p==1003){
            s+=q*3.50;
            }
   else if(p==1004){
            s+=q*4.50;
            }
    else if(p==1005){
            s+=q*5.50;}
}
 printf("%.2lf\n",s);
return 0;
}
