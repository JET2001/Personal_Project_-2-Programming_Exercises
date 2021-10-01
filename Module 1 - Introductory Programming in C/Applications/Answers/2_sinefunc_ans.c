//
//  2_sinefunc_ans.c
//  
//
//  Created by Jon on 5/2/21.
//

#include <stdio.h>

// Function to calculate x^exp
double power(double x, int exp)
{
    // Your code here
    long double pdt = 1L;
    for (;exp > 0;exp--) pdt *= x;
    //printf("pdt = %lf\t",pdt);
    return pdt; // Edit this too!
}

double factorial(int x)
{
    // Your code here
    double result = 1L;
    for (; x > 0; x--) result *= x;
    //printf("result = %lf\n", result);
    return result; // Edit this too!
}
//Use the maclaurin series to write the sine function
double sine(double x, int n)
{
    // This function can be heavily adapted by your answer to Q1
    // Your code here!
    int i, sign = -1;
    double sum = 0;
    for (i = 0; i <= n; i++)
    {
       // Value of (-1)^r
        sign *= -1;
        sum += ((double) (sign) * power(x, 2*i+1))/((double) factorial(2*i+1));
    }
    return sum; // Edit this too!
}

/*Function main has been written for you*/
int main(void)
{
    double x; int n;
    scanf("%lf %d", &x, &n); // Input Line 1
    printf("%.10lf\n", sine(x,n)); // Output Line 1
    return 0;
}
