#include<stdio.h>
#include<string.h>
int main(){
int n,c,Thor;
scanf("%d",&n);
while(n--){
    char c[10];
    int m;
    scanf("%s %d",&c,&m);
    if(strcmp(c,"Thor")==0){
        printf("Y\n");
    }
    else printf("N\n");

}
return 0;}
