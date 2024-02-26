//C Program to Calculate Sum of Natural Numbers
#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number till you want the sum : ");
    scanf("%d",&n);
    int sum=0;
    for(int i=0;i<=n;i++)
    {
       sum+=i;
    }
    printf("Sum = %d",sum);

    return 0;
}