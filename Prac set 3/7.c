// Sum of 1^2 + 2^2 + 3^2 + ... + n^2

#include <stdio.h>
int main()
{
    int n,i,t=1,sum=0;
    printf("Enter a number\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        t=i*i;
        sum=sum+t;
    }
    printf("Sum upto %d terms is %d",n,sum);
    return 0;
}
