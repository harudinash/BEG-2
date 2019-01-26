#include <stdio.h>

int main()
{   
    int n,a=1,b=0,r,c;
    printf("Input : \n");
    scanf("%d",&n);
    a=n;c=n;
    
    while(a)
    {
        r=a%10;
        b=b*10+r;
        a=a/10;
    }
    if(b==c)
    printf("\nOutput : Yes");
    else
    printf("\nOutput : Not");
    return 0;
}
