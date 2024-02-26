#include<stdio.h>
#include<math.h>

int main()
{
    int num,rem,rev=0,weight=0;
    printf("Enter a Number: ");
    scanf("%d",&num);
    while(num!=0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("Reverse= %d",rev);

}