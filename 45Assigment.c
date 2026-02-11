//Write a program which accept total marks and obtained marks from user and calculate percentage
#include<stdio.h>
float Percentage(int iTotal,int iScore)
{
    float fPercent = 0.0f;
    fPercent = iScore * 100 / iTotal;
    return fPercent;

   

}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    float fRet = 0.0f;
    printf("Enter the Total marks");
    scanf("%d",&iValue1);

    printf("Please enter the obtained marks");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);
    printf("Percentage is : %f",fRet);
    return 0;
}