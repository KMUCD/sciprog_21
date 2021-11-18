#include <stdio.h>
#include <stdlib.h>

//Iterative and recursive version of Euclid's algorithm
//to  calculate the gcd of two positive integers

//This time we will not use scanf to input,
//but create random ints 


//a and b below are local to iterativeGCD
//they are independent to int main

int iterativeGCD(int a, int b){
   int temp;
   while(b!=0){
	temp = b;
	b=a%b;
	a=temp;
	}
   return a;
   }

int recursiveGCD(int a, int b){
   if(b==0){
	return a;
	}
   else{
	return (recursiveGCD(b, a%b));
	}
   }

//We can declare and define at once

int main(){
   FILE *fp;
   int a;
   int b;
 
   //Here we generate two positive integers between 1 and 12
   //srand initialises new random seed - uses internal clock of computer
   srand(time(NULL));
   //Add 1 so positive int only
   //typically typecast to float but here int is sufficient
   a = (rand() % 11)+1;
   b = (rand() % 11)+1;
   
   //w for write, r for read in fopen
   fp = fopen("gcd.txt","w");
   fprintf(fp, "Iterative GCD(%d, %d) = %d\n",a,b,iterativeGCD(a,b));
   fprintf(fp, "Recursive GCD(%d, %d) = %d\n",a,b,recursiveGCD(a,b));

   fclose(fp);

return 0;
}

    
