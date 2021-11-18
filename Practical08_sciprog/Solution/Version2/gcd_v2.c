#include <stdio.h>
#include <stdlib.h>

//Iterative and recursive version of Euclid's algorithm
//to  calculate the gcd of two positive integers

//This time we will not use scanf to input,
//but create random ints 

//Declare functions

// a and b below are local to iterativeGCD
// they are independent to int main
int iterativeGCD(int a, int b);
int recursiveGCD(int a, int b);

//We can decalre and define at once



int main(){
   int a,b;
   //Start clok
   //Here we generate two positive integers between 1 and 12
   
   //srand initialises new random seed - uses internal clock of computer
   srand(time(NULL));
   //Add 1 so positive int only
   //typically typecast to float but here int is sufficient
   a = (rand() % 11)+1;
   b = (rand() % 11)+1;
 
   //Now we call the iterative and recursive functions
   printf("Iterative gcd(%d, %d) = %d\n",a,b, iterativeGCD(a,b));
   printf("Recursive gcd(%d, %d) = %d\n",a,b, recursiveGCD(a,b));

   return 0;
}


//We define our iterative gcd function below
int iterativeGCD(int a, int b){
   int temp;
   while(b!=0){
	temp = b;
        b = a%b;
        a = temp;
	}
   return a;
   }
int recursiveGCD(int a, int b){
   if (b==0){
	return a;
	}   
   else{
	return(recursiveGCD(b,a%b));
	}

}
