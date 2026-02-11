//Accept N number from user and Check Whether 11 is present or not.


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool Check(int Arr[],int iLength)
{
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            break;
        }
       

    }

     if(Arr[iCnt] == 11)
     {
        return true;
     }
     else
     {
        return false;
     }

    
} 
int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    bool bRet = 0;
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

    bRet = Check(ptr,iSize);
    if(bRet == true)
    {
        printf("11 is present in array");
    }
    else
    {
        printf("11 is not present in array");
    }
    

    free(ptr);

    return 0;
}