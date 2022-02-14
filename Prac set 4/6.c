//reverse array elements
#include<stdio.h>
#define N 50
void main()
{
    int a[N],b[N],i,n;
    printf("Enter how many values you want to input[1-50]\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d] Enter no\n",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
        b[(n-1)-i]=a[i];
    printf("Reversed array is\n");
    for(i=0;i<n;i++)
        printf("%d] %d\n",i+1,b[i]);
}
