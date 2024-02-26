//C Program to Check Whether Number is Even or Odd
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a Number:");
    scanf("%d",&num);

    if(num%2==0){
        printf("Even");
    }
    else if(num%2!=0)
    {
        printf("Odd");
    }
    return 0;
}