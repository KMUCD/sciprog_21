#include <stdio.h>
#include <stdlib.h>
#include "magic_square.h"
int main(){

   int n;
   printf("Enter the square size:\n");
   scanf("%d",&n);
   //We now allocate a matrix
  
   int i;
   int ** magicSquare = malloc(n * sizeof(int));

   for(i = 0; i < n; i++){
	magicSquare[i] = malloc(n*sizeof(int));
	}

   int j;
   for(i = 0; i < n; i++){
	printf("Enter the elements in row #%d,seperated by blanks and or linebreaks:\n", i+1);
        for(j=0; j<n; j++) {
 		//fscanf reads from file - scanf is user input
		scanf("%d", &magicSquare[i][j]);
		}
	}
   printf("The square %s magic.\n", isMagicSquare(magicSquare,n) ? "is" : "is NOT");

   for(i = 0; i <n; i++) {
	//Free element wise memory
	free(magicSquare[i]);
	}
	//Free array memory
	free(magicSquare);
   return 0;
}

