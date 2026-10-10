#include<stdio.h>
int main(){
int X,Y,sum=0;
scanf("%d %d",&X,&Y);
for(int i=X;i<=Y;i++)
{
    if(i%13!=0)
    {
        sum=sum+i;
    }
}

printf("%d",sum);
return 0;

}
