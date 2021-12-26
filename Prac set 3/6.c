//Prime or not

#include <stdio.h>
int main()
{
    int n,i=2,x;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(;i<n;i++)
    {
        if(n%i==0)
        {
            printf("%d is composite",n);
            goto jump;
        }
    }
    if(n==1)
        printf("1 is neither prime nor a composite number");
    else
        printf("%d is prime",n);
    jump:
    return 0;
}
