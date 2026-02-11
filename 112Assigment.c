/*
input : iRow = 5   iCol = 5
output:  
                    A       B       C       D       E
                    a       b       c       d       e
                    A       B       C       D       E
                    a       b       c       d       e
                    A       B       C       D       E
*/
#include<stdio.h>
void Pattern(int iRow,int iCol)
{

    int i = 0;
    int j = 0;
    char ch = '\0';
    char ch1 = '\0';
    for(i = 1; i<= iRow; i++)
    {
        for(j = 1,ch = 'A',ch1 = 'a'; j <= iCol; j++,ch++,ch1++)
        {
            if(i % 2 == 0)
            {
                printf("%c\t",ch1);
            }
            else
            {
                printf("%c\t",ch);
            }
            
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