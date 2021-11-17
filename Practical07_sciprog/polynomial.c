#include<stdio.h>
#include<stdlib.h>
#include<math.h>


//In this tutorial an estimate of the exponential number e: 2.71828...
//is estimated using a polynomial expansion and setting the x coefficient to 1


//Declare and write factorial
//First value of fact is 1
int factorial(int n){
   int i;
   int fact = 1;


   if (n==0)
	return 1;

   for (i = 1; i <=n; i++)
	fact = fact*i;

   return fact;

	}

//Declare and write function to compute 
//the polynomial - Calls pow from math and factorial 
//from above
double compute_polynomial(int n, int x){
   double sum = 0.0;
   int i;

   for (i=0;i<=n; i++)
	sum = sum + (double)pow(x,i) / factorial(i);
   return sum;

    }


int main() {
   //initialise variables = note array of terms is pointer double
   int order_of_polynomial;
   int size_of_array;
   double* array_of_terms;
   int i, x=1;
   
   //Enter polynomial order 
   printf("Enter the order of the polynomial: ");
   scanf("%d", &order_of_polynomial);
  
    
   size_of_array = order_of_polynomial + 1;
   //Specify type of array then allocate with - loc - size by type
   //Points to position of memory and allocates space
   array_of_terms = (double *) malloc(size_of_array * sizeof(double));
   
   for(i = 0; i < size_of_array; i++){
	array_of_terms[i] = compute_polynomial(i,x);
	printf("f[%d] = %0.20f\n",i, array_of_terms[i]);
	} 
  
   //Print true value and then compare in for loop the differences as our poly term increases
   printf("e1 = %0.20f\n",exp(1));
  
   for(i = 0; i < size_of_array; i++)
	printf("Estimate difference for term %d is %0.20f\n",i,exp(1) - array_of_terms[i]);

   //free arrays by deallocating memory at the end
   free(array_of_terms);
   //Set pointer to null
   array_of_terms = NULL;

return 0;
}
