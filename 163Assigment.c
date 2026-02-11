//Accept N number from user and Dissply the element is divisible by 5 and Even.
//iNPUT = N  6
// Element  85 66 3 80 93 88
// output 85  80

#include<stdio.h>
#include<stdlib.h>
int Divisible(int Arr[],int iLength)
{
    int iCnt = 0;
    printf("Disply the element divisible by 5 and 3\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 5 == 0) && (Arr[iCnt] % 2 == 0))
        {
            printf("%d\n",Arr[iCnt]);
        }
    }
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

    Divisible(ptr,iSize);

    free(ptr);

    return 0;
}