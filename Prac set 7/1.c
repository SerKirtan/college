//Read structure elements
#include <stdio.h>

struct book
{
    int id;
    char name[20];
    float price;
};

int main()
{
    int i,n;
    printf("Enter how many books information you want to enter : ");
    scanf("%d",&n);
    struct book b[n];
    for(i=0;i<n;i++)
    {
        printf("\n Enter Book Id : ");
        scanf("%d",&b[i].id);
        fflush(stdin);
        printf("\n Enter Book Name : ");
        scanf("%[^\n]s",&b[i].name);
        printf("\n Enter Book Price : ");
        scanf("%f",&b[i].price);
    }
    for(i=0;i<n;i++)
    {
        printf("\nBook-%d details :",i+1);
        printf("\nBook Id    = %d",b[i].id);
        printf("\nBook Name  = %s",b[i].name);
        printf("\nBook Price = %.2f",b[i].price);
    }
}
