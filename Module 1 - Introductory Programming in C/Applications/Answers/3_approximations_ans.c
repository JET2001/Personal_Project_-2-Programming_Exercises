//
//  3_approximations_ans.c
//
//
//  Created by Jon on 7/7/21.
//

#include <stdio.h>
#include <math.h>

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

// Created a new function
int getApproxCode(double approx)
{
    if (approx <= 0.003125l) return 2;
    else if (approx <= 0.01l) return 1;
    else return 0;
}


// The following function below takes in the number of terms n, the lower
// bound of the interval a and the upper bound b.
// It returns an integer:
// 0 means the approximation is poor
// 1 means the approximation is good.
// 2 means the approximation is excellent.
// Implement this function to make the program work.
int getApproximationType(int n, double a, double b)
{
    // Case 1: if a and b are negative:
    if (a < 0 && b < 0)
    {
        // a would be further from zero (origin) than upper bound b.
        // Check the approximation at value a.
        double approx = fabs(sine(a,n) - sin(a));
        //printf("Approx = %lf\n", approx);
        return getApproxCode(approx);
    }
    // Case 2: if a and b are positive
    else if (a > 0 && b > 0)
    {
        // b would be further from zero (origin) than lower bound a.
        // Check the approximation at value b.
        double approx = fabs(sine(b,n) - sin(b));
        //printf("Approx = %lf\n", approx);
        return getApproxCode(approx);
    }
    else // Case 3: a < 0 and b > 0
    {
        // In this case, add both values together.
        double sum = a + b;
        if (sum >= 0) // This would mean a is less than or equal in magnitude compared to b
        {
            // This would then imply that b is further from zero (origin) than a.
            double approx = fabs(sine(b,n) - sin(b));
            printf("Approx = %lf\n", approx);
            return getApproxCode(approx);
        }
        // If code reaches this point then,
        // This would mean that a is larger in magnitude compared to b.
        // This would then imply that a is further from zero (origin) than b.
        double approx = fabs(sine(a,n) - sin(a));
        printf("Approx = %lf\n", approx);
        return getApproxCode(approx);
    }
}

// Function main() has been written for you.
int main(void)
{
    int n;
    scanf("%d", &n); // Input line 1
    double a, b;
    scanf("%lf %lf", &a, &b); // Input line 2

    // Store output of function in variable result.
    int result = getApproximationType(n, a, b);
    switch (result)
    {
        case 0: printf("POOR"); break;
        case 1: printf("GOOD"); break;
        case 2: printf("EXCELLENT"); break;
        default: printf("Output Not Valid!");
    }
    printf("\n");
    return 0;
}
