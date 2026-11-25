#include<stdio.h>

void main()
{
    int a,b,choice,add,sub;

    printf("Enter two number :");
    scanf("%d%d",&a,&b);

    printf("\n1 - Addition");
    printf("\n2 - Subtraction");
    printf("\n3 - Multiplication");
    printf("\n4 - Divide");
    printf("\nEnter your choice :");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1: add = a + b;
                printf("Addition = %d",add);
                break;
        case 2: sub = a - b;
                printf("Subtraction = %d",sub);
                break;

        default: printf("Invalid choice...");
    }

}