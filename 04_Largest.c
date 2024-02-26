//C Program to Find Largest Number Among Three Numbers
#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter first number:");
    scanf("%d",&num1);
    printf("Enter Second number:");
    scanf("%d",&num2);
    printf("Enter Third number:");
    scanf("%d",&num3);

    if(num1>num2 && num1>num3)
    {
        printf("%d is the largest",num1);
    }
    else if(num2>num1 && num2>num3)
    {
        printf("%d is the largest",num2);

    }
    else if(num3>num2 && num3>num1)
    {
        printf("%d is the largest",num3);

    }
    return 0;
}