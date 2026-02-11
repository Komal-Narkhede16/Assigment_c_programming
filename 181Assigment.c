//Accept N number from user and accept one anather number as No
// Check whether NO is present or not.
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL Check(int Arr[],int iLength,int iNo)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }

    if(Arr[iCnt] == iNo)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
} 
int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iValue = 0;
    BOOL bRet = 0;
    printf("Enter the size of array\n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize * sizeof(int));
    if(ptr == NULL)
    {
        printf("Memory unable to allocate\n");
        return -1;
    }
    printf("Enter the element into array\n");
    for( iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Disply the element into the array\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
    printf("%d\t",ptr[iCnt]);
    }

    printf("\nEnter the Value\n");
    scanf("%d",&iValue);
    bRet = Check(ptr,iSize,iValue);
    if(bRet == TRUE)
    {
        printf("Number is present\n");
    }
    else
    {
        printf("Number is not a present\n");
    }
    free(ptr);
    return 0;

}