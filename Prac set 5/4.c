//Check if number is Prime, armstrong or a perfect number
#include <stdio.h>
int fun(int n)
{
    int i,sum=0,count=0,rem,x,resl=0;
    if(n==1)
        printf("1 is neither prime nor composite\n1 is an Armstrong number");
    if(n==2)
        printf("2 is a prime number");
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            break;
        if(i==(n-1))
            printf("%d is a prime number",n);
    }
    for(i=1;i<n;i++)
    {
        if(n%i==0)
            sum+=i;
    }
    if(n==sum)
        printf("%d is a perfect number",n);
    x=n;
    while(n!=0)
    {
        count++;
        n/=10;
    }
    n=x;
    while(n!=0)
    {
        rem=n%10;
        sum=1;
        for(i=1;i<=count;i++)
            sum=(sum*rem);
        resl+=sum;
        n/=10;
    }
    if(resl==x)
        printf("%d is an Armstrong number",x);
}
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    fun(n);
}
