//Matrix addition and subtraction
#include<stdio.h>
int main()
{
    int r1,c1,r2,c2, a[10][10], b[10][10], c[10][10] ,i,j;
    printf("Enter rows and coloums of first matrix\n");
    scanf("%d %d",&r1,&c1);
    printf("Enter rows and coloums of second matrix\n");
    scanf("%d %d",&r2,&c2);
    
    if(r1!=r2 || c1!=c2)
        printf("Matrix 1 and Matrix 2 are not equal\n");
    else
    {
        printf("Enter the elements of 1st matrix\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
                scanf("%d",&a[i][j]);
        }
        printf("Enter the elements of 2nd matrix\n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
                scanf("%d",&b[i][j]);
        }
        //Subtraction matrix
        printf("The subratracion matrix is\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
                printf("%d",a[i][j]-/*change minus sign for matrix addition*/b[i][j]);
            printf("\n");
        }
    }
    return 0;
}
