//Accept one onumber from user and check whether number is even or odd.
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL CheckEvenOdd(int iNo)
{
    if(iNo % 2 == 0)
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

    printf("Enter the Value");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);
    if(bRet == TRUE)
    {
        printf("%d is a even number",iValue);
    }
    else
    {
        printf("%d is odd number",iValue);
    }

}