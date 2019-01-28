#include<stdio.h>
void main()
{
int a=0,t=0,r=0,b=0,s=1,u=0,l=0,h=0,y=0;
scanf("%d",&a);
u=a;
h=a;
while(a)
{
a=a/10;
l++;
}

printf("%d l",l);
while(u)
{r=u/10;

while(l)
 {s=s*r;
 l--;}

t=t+s;
u=u%10;
}
if(t==h)
{
printf("The given num, %d is amstrong num",h);
}
else
{
printf("the given num, %d is not amstrong num",h);
}
getch();
}