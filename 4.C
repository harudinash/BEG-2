#include <stdio.h>

int main()
{
   int a,b,i,y;
   scanf("%d%d",&a,&b);
   for(i=a+1;i<b;i++)
   {
       if(i%2!=0)
       {
           printf("%d\t",i);
       }
   }
    return 0;
}
