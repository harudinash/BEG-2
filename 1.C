#include <stdio.h>

int main()
{   
    int n,a=1,b;
    printf("Input : \n");
    scanf("%d%d",&n,&b);
    while(b)
    {
        a=a*n;
        b--;
    }
    printf("\nOutput : %d",a);
    return 0;
}
