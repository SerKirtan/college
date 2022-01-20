//Search an element in an array
#include<stdio.h>
#define N 50
void main()
{
    int a[N],n,i,x;
    
    printf("Enter how many elements you want to enter between 1-50:\n");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        printf("%d] Enter number:\n",i+1);
        scanf("%d",&a[i]);
    }
    
    printf("Enter the element you want to search:\n");
    scanf("%d",&x);
    
    for(i=0;i<n;i++)
        if(x==a[i])
            printf("Element %d is at the index %d\n",x,i);
}
