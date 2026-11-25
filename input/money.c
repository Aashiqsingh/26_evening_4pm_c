#include<stdio.h>
void main()
{

    int amount,n500,n200;

    printf("Enter amount :");
    scanf("%d",&amount);


    n500 = amount / 500;
    amount = amount % 500;
    n200 = amount / 200;
    amount %= 200;


    printf("500 Notes = %d",n500);
    



}