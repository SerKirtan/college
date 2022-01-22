//Fibonacci series using recursive function. 
#include <stdio.h>
int fun(int n)
{
    int i=1,sum=0,t1=0,t2=1;
    for(;i<=n;i++)
    {
        printf("%d ",t1);
        sum=t1+t2;
        t1=t2;
        t2=sum;
    }
    return 0;
}
int main()
{
    int a;
    scanf("%d",&a);
    fun(a);
    return 0;
}
