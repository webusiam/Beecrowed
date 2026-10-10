
#include<stdio.h>
int main(){
int N,count=0,bcount=0;
scanf("%d",&N);
for(int i=1;i<=N;i++)
{
    int x;
    scanf("%d",&x);
    if(x>=10 && x<=20)
    {
        count++;}
        else
        {
            bcount++;
        }

}
printf("%d in\n",count);
printf("%d out\n",bcount);
return 0;




}
