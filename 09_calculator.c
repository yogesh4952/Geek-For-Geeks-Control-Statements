#include<stdio.h>
void calculator(float a, float b);
int main(){
    float a,b;
    printf("Enter First Number:");
    scanf("%f",&a);
    printf("Enter Second Number:");
    scanf("%f",&b);
    calculator(a,b);

    return 0;
}

void calculator(float a,float b)
{
    float add=a+b;
    printf("Add = %.2f\n",add);
    float multiply=a*b;
    printf("Multiply= %.2f\n",multiply);
    float subtract=a-b;
    printf("Subtraction= %.2f\n",subtract);
    float divide=a/b;
    printf("Division= %.2f\n",divide);
}