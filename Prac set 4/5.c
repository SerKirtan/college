// Find sum of all elements in array

#include<stdio.h>
#define N 50
int main()
{
    int a[N],i,n,sum=0;
    printf("\n Enter How many numbers you want to enter from [1-50] : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n%d] Enter Value : ",i+1);
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("\nSum of all your values = %d",sum);
    return 0;
}
