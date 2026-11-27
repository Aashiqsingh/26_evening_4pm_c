#include<stdio.h>
void main()
{

    int year;

    printf("Enter year :");
    scanf("%d",&year); // 1700


    if(year%400 == 0)
    {
        printf("Leap year");
    }
    else if(year%100 == 0)
    {
        printf("Not leap year");
    }
    else if(year%4==0)
    {
        printf("Leap year");
    }else{
        printf("Not leap year");
    }





    // if((year%4==0 && year%100!=0) || year%400==0)
    // {
    //     printf("Leap year");
    // }
    // else{
    //     printf("Not leap year");
    // }
}