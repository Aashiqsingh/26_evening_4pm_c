#include<stdio.h>
void main()
{

    int sec,hour,min;
    printf("Enter second :");
    scanf("%d",&sec);


    hour = sec / 3600; // 1
    sec = sec % 3600;
    min = sec / 60; // 6
    sec = sec % 60;

    printf("%d : %d : %d",hour,min,sec);


}