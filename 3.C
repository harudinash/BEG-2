#include <stdio.h>

int main()
{
    int a,x=0,y,z,i;
    //clrscr();
    printf("Input :");
    scanf("%d",&a);
    printf("Output :\n");
    if(a==0)
    {
        printf("invalid");
        x=1;
    }
    if(a==1)
    {
    printf("no");
    x=1;
    }
    if((a==2)||(a==3))
    {
        printf("yes");
        x=1;
    }
    else if(a>3)
    { y=2;x=0;
        for(i=2;i<a;i++)
        { 
            if(a%i==0)
            
        
            { 
                printf("no");
                x=1;
                break;
            }
        
            y++;
        }
    }
   if(x==0)
   printf("yes");
    return 0;
}
