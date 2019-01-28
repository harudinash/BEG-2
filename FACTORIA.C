#include<stdio.h>
void main()
{
int i,t=1,a;
printf("input :");

scanf("%d",&a);
printf("output :\n");
for(i=a;i>0;i--)
{t=t*i;
}
printf("%d",t);
getch();
}
