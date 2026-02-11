 //Accept N number from user and accept Range, Disply all elements from that range

#include<stdio.h>
#include<stdlib.h>
void Range(int Arr[],int iLength,int istart ,int iend)
{
    int iCnt = 0;
    
   
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt]  >= istart && Arr[iCnt] <= iend)
        {
            
           printf("%d\t",Arr[iCnt]);

            
        }
    }

   

    
} 
int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iValue1 = 0;
    int iValue2 = 0;
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

    printf("\nEnter starting value\n");
    scanf("%d",&iValue1);
    printf("\nEnter starting value\n");
    scanf("%d",&iValue2);

   Range(ptr,iSize, iValue1,iValue2);
   free(ptr);
    return 0;

}   
