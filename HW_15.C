#include<stdio.h>
void main()
{
 int a,b,c,d,e,g,x,r,v,p=1,l=0;
 clrscr();
 scanf("%d",&g);

 while(g)
 {
 scanf("%d",&a);
 printf("\n1.Amstrong\n2.Pallindrome");
 scanf("%d",&b);
 switch (b)
   {
     case 1:
	 c=a;d=a;e=a;l=0;p=1;x=0;
	 while(a)
	 {
	  a=a/10;
	  l++;
	  }
	  v=l;

	   while(c)
	    {
	     r=c%10;
	     l=v;p=1;
	    while(l)
	     {
	      p=p*r;
	      l--;
	    printf("p=%d",p);
	    }
	     x=x+p;
	     c=c/10;
	     printf("x=%d",x);
	     }
	     if(x==d)
	     {
	    printf("amstrong");
	    }
	    else
	    {
	    printf("not amstrong");
	    }
	    break;

	 case 2:
		   c=a;d=0;e=a;r=0;
	 while(a)
	 {
	  a=a/10;
	  l++;
	  }
	  while(c)
	    {
	     r=c%10;
	     d=d*10+r;
	     c=c/10;
	     }
	  if(d==e)
	  {
	   printf("pallindrome");
	   }
	  else
	  {
	  printf("not pallindrome");
	  }
	    break;
    }
  g--;
    }
 getch();
}
