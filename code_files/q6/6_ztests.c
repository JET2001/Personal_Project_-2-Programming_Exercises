//
//  6_ztests.c
//
//
//  Created by Jon on 2/8/21.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Global variables
int sample_size = 0;
const double PI = 3.141592653;
const double mu = 1900;
// Global Variables for output
double SAMPLE_MEAN, SAMPLE_VARIANCE, Z_SCORE;

// Function Prototypes
int ztest(const char filename[], double sig);
// Riemann Sum to aproximate google:
double Riemann(double lower, double upper, int n);

// Feel free to add additional functions (or function prototypes)
// It will really help you out!

// Here are some utility functions that I've thought of that may help you:

// Utility functions - these functions return 1 if true, and 0 if false.
int isMale(int weight){ return (weight>=1500 && weight <=2300);}

// Utility function to open a file with error checking.
FILE* open(const char filename[], const char* mode)
{
    FILE* fp;
    if ((fp = fopen(filename, mode)) == NULL)
    {
        printf("%s cannot be opened in %s mode!\n", filename, mode);
        exit(1); // Program exits
    }
    return fp;
}
// Utility Function - invNorm()
// p denotes the probability (area under the Normalised Normal Dist Curve)
// This function will return the value of m such that
// P(X > m) = sig
double invNorm(double p)
{
    double lower, upper = 4;
    // In a normalised distribution,  99% of the data are 3 standard
    // deviations away from the mean.
    // To make our invNorm function simulate infinity, we will set the
    // upper bound to a value 4
    // The rest of this solution will be iterating backward from 4
    // until the probability (area) is obtained.
    // We would do this in steps of 0.01
    // To approximate the integral here, we will use a Riemann Sum
    // implementation from Week 4 Question 6.
    double area = 0; // Note that area will be increase as the
    // distance between lower and upper increases.
    for (lower = 4; area < p; lower-=0.001)
    {
        area = Riemann(lower, upper, 100);
        // Because the interval is small, 100 rectangles would
        // be a decent approximation (I hope LOL I got no proof)
    }
    // When it breaks out of the for loop, the area has matched
    // return the value of m, the lower bound.
    return lower;
}
// Implement the NORMALISED Normal Distribution Function Here!
// This function f is actually called by invNorm().
double f(double x)
{
    // YOUR CODE HERE

    return 0l;
}

=
// Driver code
int main(void)
{
    char filename[50];
    scanf("%s", filename); // Input line 1
    double sig; // variable for significance level
    scanf("%lf", &sig); // Input line 2
    int result = ztest(filename,sig);
    printf("%.5lf %.5lf %.5lf\n", SAMPLE_MEAN, SAMPLE_VARIANCE, Z_SCORE); // Output line 1
    printf("%d\n", result); // Output line 2
    return 0;
}
// ----- Implementation below -------------
// Function returns 1 value - either 0 or 1 depending on whether the alternate
// hypothesis is accepted or not.
// A value 0 --> H0 is accepted.
// A value 1 --> H1 is accepted.
// Once you're done, remember to update the global variables above to facilitate output!!
int ztest(const char filename[], double sig)
{
    // YOUR CODE HERE





    // Remember to update the variables for output -
    // change these to something appropriate!
    SAMPLE_MEAN = -1; SAMPLE_VARIANCE = -1; Z_SCORE = -1;

    return -1;
}
