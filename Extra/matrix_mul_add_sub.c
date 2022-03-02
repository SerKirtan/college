//Multiplication, addition and subtraction of matrix
#include<stdio.h>
int main()
{
    char ch;
    int n,m,n1,m1,i,j,k,sum=0,flag=0;
    printf("Enter size of array-1 -> rows and columns : ");
    scanf("%d %d",&n,&m);
    printf("Enter size of array-2 -> rows and columns : ");
    scanf("%d %d",&n1,&m1);
    int a[n][m],b[n][m],c[n][m];
    printf("Enter the elements of array-1 :\n");
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d",&a[i][j]);
    printf("Enter the elements of array-2 :\n");
    for(i=0;i<n1;i++)
        for(j=0;j<m1;j++)
            scanf("%d",&b[i][j]);
    fflush(stdin);
    printf("Enter what operation you want to do");
    t:
    printf("\nPlease select from '+' , '-' or '*' : ");
    scanf("%c",&ch);
    switch(ch){
    case '*':
        if(m==n1)
        {
        for(i=0;i<n;i++)
            for(j=0;j<m1;j++)
            {
                for(k=0;k<n1;k++)
                    sum+=a[i][k]*b[k][j];
                c[i][j]=sum;
                sum=0;
            }
        }
        else{
            printf("Multiplication not possible");
            flag=1;
        }
    break;
    case '+':
        if(n==n1&&m==m1)
        {
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                c[i][j]=a[i][j]+b[i][j];
        }
        else
        {
            printf("Addition is not possible");
            flag=1;
        }
        break;
    case '-':
        if(n==n1&&m==m1)
        {
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                c[i][j]=a[i][j]-b[i][j];
        }
        else
        {
            printf("Addition is not possible");
            flag=1;
        }
    break;
    default:
        fflush(stdin);
        goto t;
    }
    if(flag==0){
    printf("\nMatrix A%cB is : ",ch);
    for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                printf("%d ",c[i][j]);
    }
	return 0;
}
