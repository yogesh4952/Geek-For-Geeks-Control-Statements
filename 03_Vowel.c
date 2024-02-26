//C Program to Check Whether a Character is Vowel or Consonant 
#include<stdio.h>
int main()
{
    char a;
    printf("Enter a character:");
    scanf("%c",&a);

    if(a=='a'|| a=='e' || a=='i'|| a=='o'|| a=='u' || a=='A' || a=='E'|| a=='I'|| a=='O'||a=='U'){
        printf("%c = Vowel",a);
    }
    else{
        printf("Consonant");
    }
}