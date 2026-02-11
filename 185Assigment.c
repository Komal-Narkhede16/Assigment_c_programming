 //Accept N number from user and return the product of odd number

 #include<stdio.h>
 #include<stdlib.h>
 int Product(int Arr[],int iLength)
 {
     int iCnt = 0;
     int iProduct = 0;
    
     for(iCnt = 0; iCnt < iLength; iCnt++)
     {
        if ( Arr[iCnt] % 2 != 0)
        {
                iProduct = iProduct + Arr[iCnt];
        }
         
     }

     return iProduct;
 
    
 
     
 } 
 int main()
 {
     int iSize = 0;
     int *ptr = NULL;
     int iCnt = 0;
     
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
 
    
 
    iRet = Product(ptr,iSize);
    printf("\nProduct of all odd number  is : %d\n", iRet);
    free(ptr);
     return 0;
 
 }   
 