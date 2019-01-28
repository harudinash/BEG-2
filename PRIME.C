#include<stdio.h>
void main()
{
int a,b,c,j,i,z,x[20],k=0,y=0,m;
clrscr();
scanf("%d",&z);
while(z)
{k=0;y=0;
scanf("%d",&b);
a=2;
for(i=a;i<b;i++)
{
if(i>1)
{
if((i==2)||(i==3))
{
x[k]=i;
k++;
}
else if((i%2==0)||(i%3==0))
{
continue;
}
else
{ x[k]=i;
k++;
}
}}
/*for(i=0;i<k;i++)
 {
  printf("%d ",x[i]);
  } */
    m=k; y=0;
for(i=0;i<k;i++)
  {
   for(j=i+1;j<m;j++)
     {
      c=x[i]+x[j];

      if(c==b)
      {printf("\n possible %d+%d=%d",x[i],x[j],c);
      y=1;
      break;
      }
      }
   }
    if(y==0)
     {
      printf("\n not possible");
      }
 z--;
 }
getch();
}