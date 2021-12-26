#include <stdio.h>
int main()
{
    int n,i,xn;
    printf("Enter a number\n");
    scanf("%d",&n);
    xn=n%10;
    if(n>=10)
    {
        while(n>=10)
        {
            n=n/10;
        }
        printf("Sum of the the last digit %d and first digit %d is %d",xn,n,xn+n);
    }
    else
        printf("As %d is a one digit number, sum of first and last digit is %d",n,2*n);
    return 0;
}
