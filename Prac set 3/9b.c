#include<stdio.h>
int main(){

    int r,c,x;//replace;
    int rows=5;
    /*replace = c;
    c=r;
    r=replace;*/
    for(r=1;r<=rows;r++)
    {
        for(c=1,x=1;c<=2*rows-1;c++)
        {
            if(c>=rows-(r-1)&&c<=rows+(r-1))
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
