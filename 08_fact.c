//C Program to Find Factorial of a Number
#include<stdio.h>
int main()
{
    int a;
    printf("Enter number:");
    scanf("%d",&a);
    int fact=1;
    for(int i=a;i>0;i--)
    {
   fact=fact*i;
    }
    printf("Factorial= %d",fact);
    return 0;

}