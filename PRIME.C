#include<stdio.h>
void main()
{
int a,b,i=0,j=0,l=0,c=0;
printf("input :");
scanf("%d%d",&a,&b);
printf("output :\n");
for(i=a+1;i<=b;i++)
{  c=0;
   if(i==1)
  {
  printf("1 is neither prime nor composite");
 }

 else
 {

  for(j=2;j<i;j++)
  {if (i%j==0)
     {c++;
    }}
   if(c==0)
   {
   printf("%d ",i);
   }

  } }
getch();
}
