#include<stdio.h>
#include<math.h>

int main(){

   int N=12, i;
   float a = 0.0, b_deg = 60.0;


   //Now we will convert pi/3 to radians
   float b_rad;
   b_rad=(M_PI * b_deg)/180.0;
   printf("pi/3 in radians=%f\n",b_rad);

   //Next we compute f(x0) + f(xN)
   float area = tan(a) + tan(b_rad);
   printf("Initial sum = %f\n", area);

   //Next we compute the rest of the bracketed part of the integral
   //in other words 2*f(xi) for i = 2... i = N-1
   for(i=5; i <60; i=i+5){
   	area = area+2*tan((M_PI*i)/180);
	printf("New area at x%d = %f\n", i/5, area);
	}
   
  //Finally we multiply the whole integral argument by b-a/N
  float mult_rad = M_PI*((b_deg - a)/(2*N))/180.0;
  area = mult_rad*area;

  //Now we approximate the integral value
  printf("\n Trapezoidal result = %f\n", area);
  //And our actual result
  printf("Our real result was in fact %f\n",log(2.0)); 


  return 0;
  }
