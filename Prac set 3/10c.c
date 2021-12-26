#include<stdio.h>
int main(){

    int r,c,rows,x;
    printf("Enter number of rows\n");
    scanf("%d",&rows);
    x=rows;
    for(r=1;r<=rows;r++,x--)
    {
        for(c=1;c<=2*rows-1;c++)
        {
            if(c<=rows-(r-1)&&c<=rows+(r-1))
            {
                    printf("%d",x);
            }
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
