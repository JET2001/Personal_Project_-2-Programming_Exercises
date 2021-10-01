//
//  sine_ans.c
//  
//
//  Created by Jon on 5/2/21.
//

#include <stdio.h>

//Use the maclaurin series to write the sine function
double sine(double x, int n)
{
    // Initialising variables
    int i, power_of_x, sign = -1;
    double sum = 0,
    double product;
    double factorial_product;
    
    
    //First write a loop that is used to sum from the first term to the nth term
    for (i = 0; i <= n; i++)
    {
        //Write an expression for the power of x for this term in i, AND intialise the variable for the product
        product = 1.0;
        power_of_x = 2*i+1;
        //Calculate the exponent value
        while (power_of_x > 0)
        {
            product = product*x;
            power_of_x = power_of_x - 1;
        }
        //Reset the power of x and initialise the value of the factorial product
        factorial_product = 1.0;
        power_of_x = 2*i +1;
        // Calculate the factorial value
        while (power_of_x > 0)
        {
            factorial_product = factorial_product*power_of_x;
            power_of_x = power_of_x - 1;
        }
        // Value of (-1)^r
        sign *= -1;
        //All the implementation is done!! Write an expression to sum the terms together.
        sum = sum + ((double)(sign) * product)/factorial_product;
    }
    //Return the sine of the value x, which is the sum of the n terms.
    return sum;
}

/*Function main has been written for you*/
int main(void)
{
    double x; int n;
    scanf("%lf %d", &x, &n); // Input Line 1
    printf("%.10lf\n", sine(x,n)); // Output Line 1
    return 0;
}
