/*
input : iRow = 5   iCol = 5
output:  
                    1       2       3       4       5
                    6       7       8       9       10
                    11      12      13      14      15
                    16      17      18      19      20
                    21      22      23      24      25
*/
#include<stdio.h>
void Pattern(int iRow,int iCol)
{

    int i = 0;
    int j = 0;
    int iCnt = 1;
    
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t",iCnt++);
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the Rows : \n");
    scanf("%d",&iValue1);

    printf("Enter the coloumn : \n");
    scanf("%d",&iValue2);
    Pattern(iValue1,iValue2);
    return 0;
}