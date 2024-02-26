//C Program to Check Whether a Number is a Palindrome or Not 
#include<stdio.h>
int main()
{
    int reverse=0,reminder,num,originalNumber;
    
    printf("Enter a Number:");
    scanf("%d",&num);
    originalNumber=num;

    while(originalNumber!=0){
        reminder=originalNumber%10;
        reverse=reverse*10+reminder;
        originalNumber/=10;
    }
    printf("Reversed = %d\n",reverse);
    originalNumber=num;
    if(num==reverse){
        printf("%d is Pallindrome Number",num);

    }
    else{
        printf("%d is not a pallindrome number",num);
    }
}