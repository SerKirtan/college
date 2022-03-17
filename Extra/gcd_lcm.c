//LCM HCF or LCM GCD
#include <stdio.h>
int lcmx(int n1,int n2)
{
    int lcm,max;
    max = (n1 > n2) ? n1 : n2;
    while (1) {
        if (max % n1 == 0 && max % n2 == 0) {
            lcm=max;
            break;
        }
        ++max;
    }
    return lcm;
}
int gcdx(int n1,int n2)
{
    int gcd,i;
    for(i=1;i <= n1 && i <= n2; ++i)
        if(n1%i==0 && n2%i==0)
            gcd = i;
    return gcd;
}
int main()
{
    int n1,n2,gcd,lcm;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);
    gcd= gcdx(n1,n2);
    lcm= lcmx(n1,n2);
    printf("G.C.D. of %d and %d is %d", n1, n2, gcd);
    printf("\nL.C.M. of %d and %d is %d", n1, n2, lcm);
    return 0;
}
