//Deletion of an element from a specified location
#include <stdio.h>
int main()
{
    int N,a[100],i,x;
    printf("Enter how many values you want to enter\n\t");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        printf("%d] Enter value:\n\t",i);
        scanf("%d",&a[i]);
    }
    printf("\nEnter which element you want to delete:\n\t");
    scanf("%d",&x);

    for(i=x;i<N;i++)
        a[x]=a[x+1];

    printf("After deletion new array is:");
    for(i=0;i<(N-1);i++)
        printf("\n\t%d] %d",i,a[i]);
    return 0;
}
