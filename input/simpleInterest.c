#include<stdio.h>

void main()
{
    long int p,r,t,ans;

    printf("Enter principal amount :");
    scanf("%ld",&p);

    printf("Enter rate of interest :");
    scanf("%ld",&r);

    printf("Enter time taken :");
    scanf("%ld",&t);

    ans = p*r*t/100;
    printf("Simple interest = %ld",ans);
}