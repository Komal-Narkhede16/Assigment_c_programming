////Write a program which accept number from user and  calculate the sumation of all digit.
#include<stdio.h>
int CountFrequency(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;
    int iSum = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number");
    scanf("%d",&iValue);
    iRet = CountFrequency(iValue);
    printf("Sumation of all digit is : %d",iRet);

    return 0;
}