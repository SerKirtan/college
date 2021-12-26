//Factorial

#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter a number\n");
    scanf("%d",&n);
    i=n;
    if(n==1)
        printf("Factorial is 1");
    else
    {
    for(--n;n!=1;n--)
        i=i*n;
    printf("Factorial is %d",i);
    }
    return 0;
}
