//Write a program which accept number from user and check whether 0 is present or not.
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;




BOOL CheckDigit(int iNo)
{
    int iDigit = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            break;
        }
        iNo = iNo / 10;
    }
    if(iDigit == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
    printf("Enter number");
    scanf("%d",&iValue);
    bRet = CheckDigit(iValue);
    if(bRet == TRUE)
    {
        printf("0 is present in the value");
    }
    else
    {
        printf("0 is not present in value");
    }

    return 0;
}