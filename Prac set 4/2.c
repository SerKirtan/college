//Which number is even or odd out of 10 using array

#include<stdio.h>
#define N 10
int main()
{
    int num[N],i;
    for(i=0;i<N;i++)
    {
        printf("%d] Enter number\n",i+1);
        scanf("%d",&num[i]);
    }
    for(i=0;i<N;i++)
    {
        if(num[i]%2==0)
            printf("%d] %d is an Even number\n",i+1,num[i]);
        else
            printf("%d] %d is an Odd number\n",i+1,num[i]);
    }
    return 0;
}
