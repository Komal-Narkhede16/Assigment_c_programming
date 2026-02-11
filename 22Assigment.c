//Accept one number from user and print that number of * on screen by using the while loop.
#include<stdio.h>
void Accept(int iNo)
{
   int iCnt = 1;
   while(iCnt <= iNo)
   {
        printf("*\t");
        iCnt++;

   }
   
}
int main()
{
    int iValue = 0;
    printf("Enter the number");
    scanf("%d",&iValue);

    Accept(iValue);

    return 0;

}