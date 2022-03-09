//Read from data and store odd in odd file and even in even file5
#include<stdio.h>
void main()
{
    int i=0,a[10],n,num;
    printf("How many numbers you want to enter : ");
    scanf("%d",&n);
    printf("Enter %d numbers :\n",n);
    FILE *fptr = fopen("2data.txt","w");
    if(fptr==0)
        printf("File error");
    else
        for(;i<n;i++)
        {
            scanf("%d",&num);
            if(num==-1)
                break;
            putw(num,fptr);            
        }
    fclose(fptr);
    fptr=fopen("2data.txt","r");
    FILE *fptr2 = fopen("2odd.txt","w");
    FILE *fptr3 = fopen("2even.txt","w");
    if(fptr2==0&&fptr3==0)
        printf("File error");
    else{
        while((num= getw(fptr))!=(EOF))
        {
            if(num%2==0)
                putw(num,fptr3);
            else
                putw(num,fptr2);
        }
    }
    fclose(fptr);
    fclose(fptr2);
    fclose(fptr3);
    fptr2=fopen("2odd.txt","r");
    fptr3=fopen("2even.txt","r");
    printf("\n Contents of odd file : ");
    while((num=getw(fptr2))!=EOF)
        printf("%d ",num);
    printf("\n Contents of Even file : ");
    while((num=getw(fptr3))!=EOF)
        printf("%d ",num);
    fclose(fptr2);
    fclose(fptr3);
    printf("\nExecuted successfully");
}
