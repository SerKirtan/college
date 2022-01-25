//Fibonacci series using recursive function.
#include <stdio.h>
int fun(int n,int t1,int t2,int sum)
{
    if(n==0)
        return 0;
    else
    {
        printf("%d ",t1);
        sum=t1+t2;
        t1=t2;
        t2=sum;
        return fun(n-1,t1,t2,sum);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    fun(n,0,1,0);
    return 0;
}
