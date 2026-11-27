#include<stdio.h>

void main()
{
    int age,score,exp;
    float salary,loan;

    printf("Enter employee age :");
    scanf("%d",&age);

    printf("Enter credit score :");
    scanf("%d",&score);

    printf("Employee Experience :");
    scanf("%d",&exp);

    printf("Enter employee salary :");
    scanf("%f",&salary);

    if(age > 25)
    {
        if(exp > 2)
        {
            if(salary > 25000)
            {
                if(score>=800)
                {
                    loan = salary * 20;
                }
                else if(score>=700){
                    loan = salary * 15;
                }
                else if(score>650)
                {
                    loan = salary * 10;
                }
                else{
                    printf("Not ptovide loan due to less crediit score.");
                }

                printf("LOAN APPROVED..");
                printf("LOAN AMOUNT = %.2f",loan);
            }
            else{
                printf("Loan rejected due to less salary..");
            }
        }
        else{
            printf("Loan rejected dut to less experience.");
        }
    }
    else{
        printf("Loan rejected due to age..");
    }

}