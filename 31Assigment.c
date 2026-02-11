//Write a program which accept  number from user and disply the multiplication of factor
// input 12

#include<stdio.h>
int multFact(int iNo)
{
    int iFact = 1;
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
        iFact = iFact * iCnt;
        }
    }
    return iFact;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the value");
    scanf("%d",&iValue);
    iRet = multFact(iValue);
    printf("Multiplication of factor is : %d",iRet);

    return 0;



}