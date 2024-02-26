//C Program to Check Leap Year
#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d",&year);

    if("year%4==0 && year%100==0")
    {
        printf("Not a leap year");
    }
    else if("year%4==0 && year%100==0 && year%400==0")
    {
        printf("its a leap year");
    }
    else if(year%4==0 )
    {
        printf("Leap year");
    }
    
}