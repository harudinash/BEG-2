#include<stdio.h>
void main()
{
int i,t=1,a;
clrscr();
scanf("%d",&a);

for(i=a;i>0;i--)
{t=t*i;
}
printf("fact=%d",t);
getch();
}