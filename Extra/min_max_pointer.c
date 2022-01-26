#include <stdio.h>
void main()
{
    int a[50],i,*min,*max,N;
    printf("Enter how many numbers you want to enter\n   ");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        printf("%d] Enter number:\n\t",i+1);
        scanf("%d",&a[i]);
    }
    min=max=&a[0];

    for(i=0;i<N;i++)
        if(a[i]>*max)
            *max=a[i];

    printf("Max = %d\n",*max);

    for(i=0;i<N;i++)
        if(a[i]<*min)
            *min=a[i];

    printf("Min = %d\n",*min);
}
