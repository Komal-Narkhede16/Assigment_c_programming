//Accept one number and check whether is divisible by 5 or not.
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 2
BOOL Check(int iValue)
{
    if(iValue % 5 == 0)
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
    printf("Enter the number");
    scanf("%d",&iValue);
    bRet = Check(iValue);
    if(bRet == TRUE)
    {
        printf("%d is Divisible by 5",iValue);
    }
    else
    {
        printf("%d is not divisible by 5",iValue);
    }

    return 0;

}