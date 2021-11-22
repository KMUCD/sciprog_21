In this practical, we introduce scanf to input variables defined by the user. 

scanf.c
In this function we introduce scanf and user inputs. We also introduce pointers and print out the address of one of our variables. 

To compile, write "gcc -o scanf scanf.c"


Fibonacci.c
In this function we calculate and print the Fibonacci sequence up to n Where
F(n) = F(n-1) + F(n-2)
and
F(0) = 0, F(1) = 1

To compile, we write "gcc -o fibo Fibo.c"


arctan.c
In this code piece, we write two methods of estimating arctan, or hyperbolic tangent using the Mclaren series expansion and using log functions.  We also use scanf to specify the precision of the Mclaren series and start and end points. 

To compile, write "gcc -o arctan arctan.c -lm" with lm to include the math libraries
