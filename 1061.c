#include<stdio.h>
int main(){
int d1,h1,m1,s1,days,hours,min,sec;
int d2,h2,m2,s2,start,end,diff;
char x[10];

scanf("%s %d", x, &d1);
scanf("%d : %d : %d", &h1, &m1, &s1);

scanf("%s %d", x, &d2);
scanf("%d : %d : %d", &h2, &m2, &s2);
start=(d1*24*60*60+h1*60*60+m1*60+s1);
end=(d2*24*60*60+h2*60*60+m2*60+s2);
diff=end-start;
days=diff/(24*60*60);
diff=diff%(24*60*60);
hours=diff/3600;
diff=diff%3600;
min=diff/60;
diff=diff%60;
sec=diff;
printf("%d dia(s)\n",days);
printf("%d hora(s)\n",hours);
printf("%d minuto(s)\n",min);
printf("%d segundo(s)\n",sec);
return 0;
}
