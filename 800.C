#include<stdio.h>
void main()
{
int x,y,z,i,j,k,a=0,b=0,h[100],d=0,r=0,c=0,n=0;
clrscr();
scanf("%d%d",&x,&y);
b=x;
for(i=x;i<y;i++)

{

b=b+a;
if(b>y)
{
break;
}
c=b;
 a=a+2;
 printf("%d ",b);
 d=0;
 while(c)
 {
 r=c%10;
 d=d+r;
 c=c/10;
 }
 h[n]=d;
 n++;
}

// y=b;

printf("\n");
for(i=0;i<n;i++)
{
 printf("%d ",h[i]);
 }

 getch();
 }