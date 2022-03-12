//Fibonacci
#include<stdio.h>
void main()
{
    int t1=0, t2=1,sum=0,n;
    printf("Enter how many terms you want : ");
    scanf("%d",&n);
    while(n!=0)
    {
        printf("%d ",t1);
        sum=t1+t2;
        t1=t2;
        t2=sum;
        n--;
    }
}
