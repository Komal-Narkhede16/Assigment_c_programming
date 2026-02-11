//Accept N number from user and return difference between Summation of 
//even element and summation of odd element
//iNPUT = N  6
// Element  85 66 3 80 93 88
// output 53(234 - 181)

#include<stdio.h>
#include<stdlib.h>
int Difference(int Arr[],int iLength)
{
    int iCnt = 0;
    int iSumEven = 0;
    int iSumOdd = 0;
    int iDiff = 0;
    
    for(iCnt = 0; iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iSumEven = iSumEven + Arr[iCnt];
        }

        if(Arr[iCnt] % 2 != 0)
        {
            iSumOdd = iSumOdd + Arr[iCnt];
        }
    }
    printf("Sumation of even number\n");
    printf("%d\n",iSumEven);
    printf("Sumation of Odd number\n");
    printf("%d\n",iSumOdd);
    iDiff = iSumEven - iSumOdd;
    printf("Difference is : %d\n",iDiff);

}
int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
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

    Difference(ptr,iSize);

    free(ptr);

    return 0;
}