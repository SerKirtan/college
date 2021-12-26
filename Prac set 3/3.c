#include <stdio.h>
int main()
{
    int n,result=2,a=0,b=1;
    printf("Enter a number\n");
    scanf("%d",&n);
    if(n==1)
        printf("Fibonacci series upto 1 term is\n0");
    else
        printf("Fibonacci series upto %d terms is\n0 ",n);
    for(n;n!=1;n--)
    {
        result=a+b;
        printf("%d ",result);
        a=b;
        b=result;
    }
    return 0;
}
