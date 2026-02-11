 //Accept N number from user and accept one anather number as No
//return index of Last occurence of that NO.
#include<stdio.h>
#include<stdlib.h>
int  LastOccurence(int Arr[],int iLength,int iNo)
{
    int iCnt = 0;
    
    int iPos = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            
            iPos = iCnt;

            
        }
    }

    return iPos;

    
} 
int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iValue = 0;
    int iRet = 0;
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
    iRet = LastOccurence(ptr,iSize,iValue);
    printf("Last occurence of value is : %d",iRet);
    
    free(ptr);
    return 0;

}   
