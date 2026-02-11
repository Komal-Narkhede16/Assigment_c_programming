//write a program which accept one number from user and check whether that number is greater then 100 of not
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckGreater(int iNo)
{
    if(iNo > 100)
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
    BOOL bRet = 0;
    printf("Enter the number");
    scanf("%d",&iValue);
    bRet = CheckGreater(iValue);
    if(bRet == TRUE)
    {
        printf("%d is a greater than 100",iValue);
    }
    else
    {
        printf("%d is not a greater than 100",iValue);
    }
}