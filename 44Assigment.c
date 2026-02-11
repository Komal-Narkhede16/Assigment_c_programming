//write a program which accept three number from user and print the multiplication of that three number.
#include<stdio.h>
int MultiplicationOfThreeNumber(int iNo1,int iNo2,int iNo3)
{
    int iMult = 0;
    iMult = iNo1 * iNo2 * iNo3;
    return iMult;
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    int iRet = 0;

    printf("Please enter the three number");
    scanf("%d",&iValue1);
    scanf("%d",&iValue2);
    scanf("%d",&iValue3);
    iRet = MultiplicationOfThreeNumber(iValue1,iValue2,iValue3);
    printf("Multiplication of three number is : %d",iRet);

    return 0;
}