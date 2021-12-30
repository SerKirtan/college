//Find maximum element from 1 dimensional array

#include<stdio.h>
#define N 50
int main()
{
    int a[N],i,n,max;
    printf("\n Enter How many numbers you want to enter from [1-50] : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n%d] Enter Value : ",i+1);
        scanf("%d",&a[i]);
        if(i==0)
            max=a[i];
        else
            if(max<a[i])
                max=a[i];
    }
    printf("\n Maximum Value in Array = %d",max);
    return 0;
}
