//write a program which accept number from user and disply it factor in decreasing  order
//input 12
//output 6 4 3 1


#include<stdio.h>
int multFact(int iNo)
{
    int iFact = 1;
    int iCnt = 0;
    for(iCnt = iNo / 2; iCnt >= 1; iCnt--)
    {
        if(iNo % iCnt == 0)
        {
        printf("%d\t",iCnt);
        }
    }
    return iFact;
}
int main()
{
    int iValue = 0;


    printf("Enter the value");
    scanf("%d",&iValue);
 multFact(iValue);
    

    return 0;



}