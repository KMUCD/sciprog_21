//This mm file will only perform the matrix multiplication. 

void matmult(int n, int p, int q, double A[n][p], double B[p][q],double C[n][q]){

   //initialise counting integers
   int i,j,k;

   //Next we perform matrix multiplication
   for(i=0;i<n;i++)
     for(j=0;j<q;j++)
       //At the end of this loop we will have the Cij value
       //iterating over i and j yields our product
       for(k=0;k<p;k++)
         C[i][j] = C[i][j] + A[i][k]*B[k][j];


}
