//program to Divide Two numbers
#include<stdio.h>
int DivideTwoNumber(int iNo1,int iNo2 )
{
    int iAns = 0;
    if(iNo2 < 0)
    {
        return -1;
    }
    iAns = iNo1/iNo2;
    return iAns;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 5;
    int iAns = 0;
    printf("Enter the first number");
    scanf("%d",&iValue1);

    printf("Enter the second number");
    scanf("%d",&iValue2);

    iAns = DivideTwoNumber(iValue1,iValue2);
    printf("Division is : %d",iAns);
    return 0;

}