#include<stdio.h>
int main(){

    int r,c,x;
    int rows=5;
    for(c=1;c<=rows;c++)
    {
        for(r=1,x=1;r<=2*rows-1;r++)
        {
            if(r>=rows-(c-1)&&r<=rows+(c-1))
            {
                if(r%2==0 && c%2==1 || r%2==1 && c%2==0)
                    printf(" ");
                else
                    printf("%d",x++);
            }
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
