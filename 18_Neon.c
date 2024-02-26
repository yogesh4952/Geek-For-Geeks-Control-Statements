//C Program to Check Whether a Number is Prime or Not
#include<stdio.h>
int main(){
    int num,sum=0,square,rem;
    printf("Enter a Number: ");
    scanf("%d",&num);

    square=num*num;
    while(square!=0){
        rem=square%10;
        sum=sum+rem;
        square/=10;
    }
    if(sum==num){
        printf("%d is neon number",num);
    }
    else{
        printf("%d is not a Neon number",num);
    }
    return 0;
}
