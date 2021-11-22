#include <stdio.h>
#include <stdlib.h>
#define MAX_FILE_NAME 100
#include "magic_square.h"


int getlines(char filename[MAX_FILE_NAME]);

int main(){

   //The below commented out code is for creating your own Magic Square
   
   //int n;
   //printf("Enter the square size:\n");
   //scanf("%d",&n);
   //We now allocate a matrix
   

   //If we want to call from a file
   FILE *f;  
   char filename[MAX_FILE_NAME];
   printf("Enter file name: ");
   scanf("%s", filename);

  
   /// DO NOT FORGET
   f = fopen(filename,"read");



   int n = getlines(filename);

   int i;
   int ** magicSquare = malloc(n * sizeof(int));

   for(i = 0; i < n; i++){
	magicSquare[i] = malloc(n*sizeof(int));
	}

   int j;
   for(i = 0; i < n; i++){
	//printf("Enter the elements in row #%d,seperated by blanks and or linebreaks:\n", i+1);
        for(j=0; j<n; j++) {
 		//fscanf reads from file - scanf is user input
		fscanf(f,"%d", &magicSquare[i][j]);
		}
	}
   printf("The square %s magic.\n", isMagicSquare(magicSquare,n) ? "is" : "is NOT");

   for(i = 0; i <n; i++) {
	free(magicSquare[i]);
	}
	free(magicSquare);

   //
   fclose(f); 

   return 0;
}


int getlines(char filename[MAX_FILE_NAME]) {
   FILE *fp;
   // r indicates read
   fp = fopen(filename, "r");
   
   //Reads each character or space in this file
   int ch_read;
   //Counts no. of files in each line
   int count;

   //Loop through chars in line,
   //EOF - end of file
   while( (ch_read=fgetc(fp))!= EOF){
	if (ch_read == '\n'){
		count++;
			}
		}
   
   printf("No. of lines %d\n", count);
   fclose(fp);
   return count;

}

