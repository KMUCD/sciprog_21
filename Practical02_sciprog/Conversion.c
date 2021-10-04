#include <stdio.h>
#include <math.h>

int main(void) {

/*15308191 Practial02*/

/* Declare variables, charbinum[60] is an array to store the number */
   int i,inum,tmp,numdigits;
   float fnum;
   char binnum[60];

/* Intialise 4-byte integer */
   inum = 33554431;
/* Convert to 4-byte float */
   fnum = (float) inum;


/* Convert to binary number (string)*/
/*In this while loop, if the modulo 2 is
  dividable by 0, then our index is 0, else 1,
  generating our binary num  */
   i = 0; tmp = inum;
   while (tmp > 0) {
     sprintf(&binnum[i],"%1d",tmp%2);
     tmp = tmp/2;
     i++;
   }

/* Terminate the string */
   binnum[i] = '\0';
       

/* Ceiling fn - raises floats to integer above it 
   i.e 10.3--->11 */
   numdigits = ceil(logf(fnum)/logf(2) );
   printf("The number of digits is %d\n",numdigits);


   printf("inum=%d,  fnum=%f, inum in binary=%s\n",
      inum,fnum,binnum);

}
