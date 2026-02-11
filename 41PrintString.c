//Write a program which accept name from user and print that name
#include<stdio.h>
int main()
{
    char Name[30];
    printf("Please enter Full name");
    scanf("%[^'\n']s",Name);

    printf("Your Name : %s",Name);

    return 0;
}