////Write a program which accept number from user and  calculate the difference between all even and odd digit.
#include<stdio.h>
int DiffEvenOddDigit(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;
    int iSumEven = 0;
    int iSumOdd = 0;
    int Diff = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iSumEven = iSumEven + iDigit;
        }
        else
        {
            iSumOdd = iSumOdd + iDigit;
        }
        iNo = iNo / 10;
    }

    Diff = iSumEven - iSumOdd;
    
    return Diff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number");
    scanf("%d",&iValue);
    iRet = DiffEvenOddDigit(iValue);
   printf("Difference between  all even and odd number : %d",iRet);

    return 0;
}