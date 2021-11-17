#include<stdio.h>

int main(){

   int n=5,p=3,q=4;
   //For this week, static arrays are used instead
   // of using pointers - we use static
   //allocation and our matrix size is fixed - the 
   //matrix size is specified during compilation time
   double A[n][p], B[p][q], C[n][q];
   int i,j,k;

   //Next we wish to initialze A, B and C matrices
   
   for(i=0; i<n; i++){
	for(j=0;j<p;j++){
	     A[i][j] = i+j;
             }
	}   

   for(i=0; i<p; i++){
	for(j=0;j<q;j++){
	    B[i][j] = i-j;
             }
	}   

   //Some compilers will initialise this matrix filled with
   //0s but in this case me must prefill an the matrix with 0s
   for(i=0; i<n; i++){
	for(j=0;j<q;j++){
	     C[i][j] = 0.0;
             }
	}   

   //Next we perform matrix multiplication
   for(i=0;i<n;i++)
     for(j=0;j<q;j++)
       //At the end of this loop we will have the Cij value
       //iterating over i and j yields our product
       for(k=0;k<p;k++)
         C[i][j] = C[i][j] + A[i][k]*B[k][j];

   //Next we will print the matrices, first A
   printf("\nThis is Matrix A:\n\n");
   //n,p for A
   for(i=0;i<n;i++){
     for(j=0;j<p;j++){
            printf("%0.3f ", A[i][j]);
		}
        //Print a new line to break the matrix
	printf("\n");
	}


   //This prints out our matrix B
   printf("\nThis is Matrix B:\n\n");
      //p,q for B
      for(i=0;i<p;i++){
 	for(j=0;j<q;j++){
    	    printf("%0.3f ", B[i][j]);
	     }
        printf("\n");
        }

   //This prints out matrix C
   printf("\nThis is Matrix C:\n\n");
    //n,q for C
    for(i=0;i<n;i++){
      for(j=0;j<q;j++){
	printf("%0.3f ", C[i][j]);
		}
	printf("\n");
	}

   return 0;
}
