//
//  sinefunc.c
//  
//
//  Created by Jon on 5/2/21.
//

#include <stdio.h>
/*
==================== QUESTION PROMPT ================
The math.h header library contains sine, cosine, tangent, exponential, square roots and
 power functions which you have to code on your own this time round. You are not allowed to
 use any of the inbuilt functions in the math.h library at all.
Refer to the PDF for more information.
 
 Pass the Stress test to complete this.
 =====================================================
 */
// Function to calculate x^exp
double power(double x, int exp)
{
    // Your code here
    
    return 0.0; // Edit this too!
}

int factorial(int x)
{
    // Your code here
    
    return 0.0; // Edit this too!
}
//Use the maclaurin series to write the sine function
double sine(double x, int n)
{
    // This function can be heavily adapted by your answer to Q1
    // Your code here!
    
    
    return 0.0; // Edit this too!
}

/*Function main has been written for you*/
int main(void)
{
    double x; int n;
    scanf("%lf %d", &x, &n); // Input Line 1
    printf("%.10lf\n", sine(x,n)); // Output Line 1
    return 0;
}
