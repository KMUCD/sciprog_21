#include <stdio.h>
#include <stdlib.h>

void fibo(int *a, int *b);

int main() {
   
   int n;
   printf("Enter a +ve integer for n \n");
   scanf("%d", &n);
   
   //Create a check that raises an error
   //in the event the number is less than one
   if (n < 1) {
	printf("The number is less than 1\n");
	exit(1);
   }
   int n1 = 0;
   int n2 = 1;

   printf("The Fibonacci sequence is:\n");
   printf("%d",n1);

   int i;
   //Begin the loop to generate our fibonacci sequence
   //Already have value 1, so start from i is 2
   for (i = 1; i<n-1; i++){
	fibo(&n1, &n2);
	printf("%d\n",n1);

	}
   //Outside the for loop we calulate our last fibo value
   //and print.
   fibo(&n1,&n2);
   printf("%d,",n1);
   return 0;
}


//We write our fibonacci function as below
//Pointers are not necessary but this is a 
//good demonstration of how to use such 
void fibo(int *a, int *b) {
   int next;
   next = *a + *b;
   *a = *b;
   *b = next;

}



