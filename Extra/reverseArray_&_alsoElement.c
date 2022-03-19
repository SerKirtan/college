//Reverses array including the number stored
#include<stdio.h>
#define N 50
int main()
{
    int a[N],i,n,rev[N];
    printf("Enter How many numbers you want to enter from [1-50] : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d] Enter a value : ",i+1);
        scanf("%d",&a[i]);
        //fflush(stdin);
        for(rev[i]=0;a[i]!=0;a[i]/=10)
        {
            rev[i]=(rev[i]*10)+(a[i]%10);
        }
    }
    for(i=0;i<n;i++)
        printf("%d\n",rev[i]);
    return 0;
}
