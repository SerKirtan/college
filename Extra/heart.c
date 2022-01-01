#include<stdio.h>
int main(){

    int r,c,rows;
    printf("Enter number of rows(should be a multiple of 3)\n");
    scanf("%d",&rows);
    rows=rows/3;
    for(r=1;r<=rows;r++)
    {
        for(c=1;c<=4*rows-1;c++)
        {
            if(c>=rows-(r-1)&&c<=rows+(r-1)||c>=3*rows-(r-1)&&c<=3*rows+(r-1))
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    rows=2*rows;
     for(r=rows;r>0;r--)
    {
        for(c=1;c<=2*rows-1;c++)
        {
            if(c>=rows-(r-1)&&c<=rows+(r-1))
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
