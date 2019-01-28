#include<stdio.h>
void main()
{
 int a,b,c,d,e,g,x,r,v,p=1,l=0;
 printf("INPUT :");
 scanf("%d",&a);
 printf("OUTPUT :\n");
	if(a==0)
		printf("invalid");
	else{
		
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
	    
	    }
	     x=x+p;
	     c=c/10;
	     
	     }
	     if(x==d)
	     {
	    printf("yes");
	    }
	    else
	    {
	    printf("no");
	    }
	}
 getch();
}
