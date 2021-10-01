//
//  6_integrals_ans.c
//
//
//  Created by Jon on 20/7/21.
//

#include <stdio.h>
#include <math.h>
// Create a global immutable variable for PI
const double PI = 3.14159265358979;

// Calculate the value of f(x).
double f(double x)
{
    return (sin(x*log(x)/(log(9)))-log(x*sin(x))/log(9));
}

// Calculate the Riemann sum within this function!
double R(int n)
{
    // Write your code here!
    // First find interval and the width of 1 rectangle is equal
    // to the interval divided by n.
    double interval = (10*PI)/11 - PI/10, width = interval/n;
    // Variable to store the sum
    double sum = 0;
    // Variable to store the right corner x-value
    double rc = (PI/10)+ width;
    //Since there are n rectangle
    for (int i = 1; i <= n; i++)
    {
        // f(rc) will give the height of the rectangle.
        // the width of the rectangle is constant.
        // So f(rc) * width
        sum += f(rc)*width;
        // Update rc by adding a width to it.
        rc += width;
    }
    return sum;
}
int main(void)
{
    int n;
    scanf("%d",&n);
    printf("%.10lf\n", R(n));
    return 0;
}
