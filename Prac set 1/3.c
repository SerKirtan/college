//Simple interest

int main() 
{
 int n;
 float p, r, SI;
 printf("\n Enter Amount  :");
 scanf("%f",&p);
 printf("\n Enter No of Years :");
 scanf("%d",&n);
 printf("\n Enter Rate  :");
 scanf("%f",&r);
 SI = (p*r*n)/100;
 printf("\n Interest = %.2f",SI);
 return 0;
}
