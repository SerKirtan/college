#include <stdio.h>
int main()
{
    int n=1,sum=0,count=-1;
    printf("[Enter as many numbers as you want and enter 0 to stop entering numbers]\n");
    while(n!=0)
    {
        printf("Enter number\n");
        scanf("%d",&n);
        sum=sum+n;
        count++;
    }
    printf("Sum of all entered number is %d and its average is %d",sum,sum/count);
    return 0;
}
