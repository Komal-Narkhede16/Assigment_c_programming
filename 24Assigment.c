//Accept two number from user and disply first number in second number of times.
// input :- 12  
// 5
// 12 12 12 12 12



#include<stdio.h>
void Display(int iNo, int iFrequency)
{
    int i = 0;
    for(i = 1; i<= iFrequency; i++)
    {
        printf("%d\t",iNo);
    }
}
int main()
{
    int iValue = 0;
    int iFrequency = 0;
    printf("Enter the value ");
    scanf("%d",&iValue);

    printf("Enter the frequency");
    scanf("%d",&iFrequency);
    Display(iValue,iFrequency);

}