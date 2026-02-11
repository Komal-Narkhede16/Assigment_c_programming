//Write a program which accept number from user and print all odd number up to n.
// input 18
// output1 3 5 7 9 11 13 17   
#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
       if((iCnt % 2) != 0)
       {
        printf("%d\t",iCnt);
       }
    }
}
int main()
{
    int iValue = 0;
    printf("enter the number");
    scanf("%d",&iValue);

    Display(iValue);
     
     return 0;

}