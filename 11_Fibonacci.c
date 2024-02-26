//C Program to Print Fibonacci Series
#include<stdio.h>
int main()
{
    
        int a=0,b=1,c;
    for(int i=0;i<10;i++)
    {
        c=a+b;
        b=a;
        a=c;
        printf("%d\t",c);
    }
}