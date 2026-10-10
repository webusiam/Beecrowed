#include<stdio.h>
int main()
{
    int X,Y,rest,temp;
    scanf("%d %d",&X,&Y);
    if(X>0 && Y>0){
    if(X>Y){
    temp=X;
    X=Y;
    Y=temp;}
    for(int i=X;i<Y;i++)
    {
        if(i%5==2 || i%5==3){
            rest=i;
            printf("%d\n",rest);}
        }
    }
return 0;
}
