 //Accept N number from user and count the frequency of 11.


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int CountFrequency(int Arr[],int iLength)
{
    int iCnt = 0;
    int iCount = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            iCount++;
        }
       

    }

     return iCount;

    
} 
int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;
    printf("Enter number of element\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter the %d element\n",iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    

    printf("Disply element from the array\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    iRet = CountFrequency(ptr,iSize);
    printf("Frequency of 11 is : %d",iRet);
    
    

    free(ptr);

    return 0;
}