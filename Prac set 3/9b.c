#include<stdio.h>
int main(){

    int i,j,x;
    int rows=5;
    for(i=1;i<=rows;i++)
    {
        for(j=1,x=1;j<=2*rows-1;j++)
        {
            if(j>=rows-(i-1)&&j<=rows+(i-1))
            {
                if(j%2==0 && i%2==1 || j%2==1 && i%2==0)
                    printf(" ");
                else
                    printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
