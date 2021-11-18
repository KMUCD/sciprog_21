#include <stdio.h>


//Iterative and recursive version of Euclid's algorithm
//to  calculate the gcd of two positive integers

//Declare functions

// a and b below are local to iterativeGCD
// they are independent to int main
int iterativeGCD(int a, int b);


//We can decalre and define at once
int recursiveGCD(int a, int b){
   if (b==0){
	return a;
	}   
   else{
	return(recursiveGCD(b,a%b));
	}

}


int main(void){
   int a,b,error;
   printf("Please input two +ve integers\n");
  error = scanf("%d %d", &a, &b);
    if (error !=2) {
	printf("Please try again\n");
	return 1;
	}
   if (a<=0 || b<=0){
	printf("These numbers are not positive!\n");
	return 1;
	}

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

