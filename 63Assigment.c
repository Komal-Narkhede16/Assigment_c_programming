//write a program to find factorial of given number
//input 5
// output 1  * 2 * 3 * 4 * 5
#include<stdio.h>
int  Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
        iFact = iFact * iCnt;

    }
    
    return iFact;
    
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Value");
    scanf("%d",&iValue);
    iRet = Factorial(iValue);
    printf("\nFactorial of number is : %d",iRet);
}