//C Program to Check Whether a Number is Positive, Negative, or Zero
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a Number:");
    scanf("%d",&num);

    if(num>0)
    {
        printf("%d is a positive Number.",num);
    }
    else if(num<0)
    {
        printf("%d is a negative Number.",num);
    }
    else if(num==0)
    {
        printf("%d is equal to Zero.");
    }
    else{
        printf("Invalid!");
    }
    return 0;
}