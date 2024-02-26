//C Program to Check Whether a Number is Prime or Not
#include<stdio.h>
int main()
{
    int count=0,num;
    printf("Enter a Number: ");
    scanf("%d",&num);


    for(int i=1;i<=num;i++){
        if(num%i==0){
            count++;
        }
    }
    if(count==2){
        printf("Prime");
    }
    else{
        printf("Composite");
    }
}