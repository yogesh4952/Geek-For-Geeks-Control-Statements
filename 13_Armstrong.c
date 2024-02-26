//C Program to Check Armstrong Number
#include<stdio.h>
#include<math.h>
int main()
{
    int a,reminder,value,sum=0,originalNum;
    printf("Enter a Number:");
    scanf("%d",&a);
    originalNum=a;
    //For counting the digits in a given number
    int count=0;
    while(originalNum!=0){
        originalNum=originalNum/10;
        reminder=originalNum%10;
         count++;
        
    }
    printf("No. of digits= %d\n",count);
    originalNum=a;//Reset the value which is the most important//
    while(originalNum!=0){
    reminder=originalNum%10;
    sum=sum+pow(reminder,count);
    originalNum=originalNum/10;
    }
    printf("sum= %d\n",sum);

    if(sum==a)
    {
        printf("Armestrong");
    }
    else{
        printf("Not Armstrong");
    }
    return 0;

       
    
}