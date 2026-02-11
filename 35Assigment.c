//Write a program which accept  number from user and disply the difference betn sumation  Factor and Non Factor
// input 12

#include<stdio.h>
int DiffSumFactNonFact(int iNo)
{
    int iFact1 = 0;
    int iFact2 = 0;
    int iCnt = 0;
    printf("\nDisplay the factor\n");
    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        
        if(iNo % iCnt == 0)
        {
            printf("%d\t",iCnt);
        iFact1 = iFact1 + iCnt;
        }
        
       
        
    }

    printf("\nDisplay the Non factor\n");

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        
        if(iNo % iCnt != 0)
        {
            printf("%d\t",iCnt);
        iFact2 = iFact2 + iCnt;
        }
        
       
        
    }
    printf("\n");
    return iFact1 - iFact2;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the value\n");
    scanf("%d",&iValue);
    iRet = DiffSumFactNonFact(iValue);
    printf("Difference betn Sumation of Factor and Non Factor : %d\n",iRet);

    return 0;



}