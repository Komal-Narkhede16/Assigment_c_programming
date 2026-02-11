//Accept single digit from user and print into word.
#include<stdio.h>
void Number(int iNo)
{
    switch(iNo)
    {
        case 1:
        printf("One\n");
        break;
        case 2:
        printf("Two\n");
        break;
        case 3:
        printf("Three\n");
        break;
        case 4:
        printf("Four\n");
        break;
        case 5:
        printf("Five\n");
        break;
        case 6:
        printf("Six\n");
        break;
        case 7:
        printf("seven\n");
        break;
        case 8:
        printf("Eight\n");
        break;
        case 9:
        printf("Nine\n");
        break;
        default:
        printf("Invalid input");

}
    
}
int main()
{
    int iValue = 0;
    printf("Enter Value");
    scanf("%d",&iValue);
    Number(iValue);
}