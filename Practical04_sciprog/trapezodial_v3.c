#include<stdio.h>
#include<math.h>

float degtorad(float degang);
float traprule(int N, float TanArr[N+1]);
int main(){
   int N=12, i;
   float TanArr[N+1], deg, rad;
   
   //Calcualte the values of the function from i=0 to i=12
   //We want to use arrays this time and ensure xi is in radians
   for(i=0; i<=N; i++){
	deg = i*5.0;
	//Call the degrees to radians functions from below
	rad=degtorad(deg);
	TanArr[i]=tan(rad);
	printf("TanArr[%d] = %f (f(x) at x = %d)\n", i, TanArr[i], i);
	}

//Next, recalling last week, we use the trapezoidal
//rule to find the area of our function 

   float area;
   area=traprule(N,TanArr);
   printf("\nTrapezodial result:%f\n",area);

//Print actual result,ln(2) (natural log)
   printf("Real result:%f\n",log(2.0));

   return 0;

}

//Here we define the float to radians function
//This converts degrees to radians - Does what it says on the tin!
float degtorad(float degang){
   return ((M_PI*degang)/180.0);
}

//In comparison to the v2 trapezoidal rule, here we separate
//the trapezoidal rule part and write it as it's own function
float traprule(int N, float TanArr[N+1]){
   int i;
   float area;
   area =TanArr[0] + TanArr[N];
   for(i=1;i<N;i++){
	area = area + 2.0*TanArr[i];
   	}

//Next we multiply the area by (pi/3)/2N after the 
//conversion to radians. We then print our approx. result
   float mult_rad = degtorad((60.0-0.0)/(2.0*N));
   area = mult_rad*area;
   return area;
}
