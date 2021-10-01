//
//  3_approximations.c
//  
//
//  Created by Jon on 1/7/21.
//

#include <stdio.h>
#include <math.h>

//Copy over your implementation from Q1 into this function.
double sine(double x, int n)
{
    // Your code here!
    
    
    return 0.0; // Edit this too!
}

// The following function below takes in the number of terms n, the lower bound of the
// interval a and the upper bound b.
// It returns an integer:
// 0 means the approximation is poor
// 1 means the approximation is good.
// 2 means the approximation is excellent.
// Implement this function to make the program work.
int getApproximationType(int n, double a, double b)
{
    // Your code here!!
    
    
    return 0; // Edit this too!
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
