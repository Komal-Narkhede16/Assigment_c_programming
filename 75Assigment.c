////Write a program which accept number from user and  count the frequency of 6.
#include<stdio.h>
int CountFrequency(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 6)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number");
    scanf("%d",&iValue);
    iRet = CountFrequency(iValue);
    printf("Frequency of  6 is : %d",iRet);

    return 0;
}