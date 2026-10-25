#include<stdio.h>
int main(){
double n=1,d=1,S=0;
for(int i=1;i<=100;i++){
        d=i;
        S=S+(n/d);
        }
    printf("%.2lf\n",S);
    return 0;

}
