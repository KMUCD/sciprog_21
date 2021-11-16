#include <stdio.h>

int main(void) { 
   
   int i;
   double a;
   printf("Enter an integer and a double, seperately by (,) please\n");
   //If ampersands are not included (the pointers), a segmentation error
   //can occur which indicates a memory allocation issue
   scanf("%d, %lf", &i, &a);

   printf("You have entered %d and %lf",i,a);
   
   //Pointers are effectively memory addresses
   //It recognises a variable exists and stores it in a memory address
   //and can be used by the compiler 
   int *pointer_to_i = &i;
   printf("The value i is %d\n",i)
   printf("The value i is also %d\n",*pointer_to_i);
   printf("The address of i is %d\n", &i);
    
   return 0;
    }
