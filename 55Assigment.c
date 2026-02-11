//Write a program which accept number from user and print first 5 multiple of number.
// input 4
// output4 8 12 16 20
#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
      printf("%d\t",iNo * iCnt);
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