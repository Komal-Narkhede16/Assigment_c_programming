//Write a program which accept number from user and print number till that number.
// input 5
// output 1 2 3 4 5
#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}
int main()
{
    int iValue = 0;
    printf("enter the number");
    scanf("%d",&iValue);

    Display(iValue);

}