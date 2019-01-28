#include<stdio.h>
void main()
{
 int a,b,c,d,e,g,h,q,x,r,v,p=1,l=0,i;
 
 

 printf("INPUT :");
 scanf("%d%d",&q,&h);
 printf("OUTPUT :\n");
 
 
  for(i=q;i<h;i++)
  {
    a=i;
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
	    printf("%d ",i);
	    }
	   
	    
	   

    
  }
 getch();
}
