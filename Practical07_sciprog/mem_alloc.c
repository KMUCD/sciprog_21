#include <stdio.h>
#include <stdlib.h>

//pointer variable
int* allocatearray(int n){
   int* array;
   //allocate space to array, dtype in sizeof is int. 
   array = (int*) malloc(n * sizeof(int));
   printf("Array of size %d allocated.\n", n);
   return array;
}

//Create a function to fill array with ones
//void functions used because we do not need a return pipe
void fillwithones(int* array, int n){
   int i;
   for (i = 0; i < n; i++)
	array[i] = 1;
}

//Print our our array
void printarray(int* array, int n){
   int i;
   for (i = 0; i <n; i++){
	printf("%d ",array[i]);}
   printf("\n");	
}

//Deallocate the array to stop memory clogging
void freearray(int *array){
   free(array);
   printf("Array freed!\n");
}

//Write our main

int main() {

   int n;
   int * array_main;
   
   printf("Enter the number of elements in your array: ");
   scanf("%d", &n);
   
   // int array to have same dtype as allocatearray
   array_main = allocatearray(n);
   fillwithones(array_main, n);
   printarray(array_main, n);
   freearray(array_main);

   //Nullify array after freeing 
   array_main = NULL;

return 0;
}

