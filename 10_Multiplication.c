//C Program to Generate Multiplication Table 
#include<stdio.h>
int main()
{
    int i,j;
    for( i=1;i<=10;i++)
    {
        printf("Multipliction table of %d\n",i);
        for( j=1;j<11;j++)
        {
            printf("%d * %d =%d\n",i,j,i*j);
        }
        printf("\n");
    }
}