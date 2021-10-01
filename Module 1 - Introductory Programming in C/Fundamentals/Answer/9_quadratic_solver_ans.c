//
//  ex3.c
//  
//
//  Created by Jon on 16/4/21.
//
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//Function Prototypes - Don't worry about this!
int verifynosol(int, int, int);
int verifysolution(int, int, int, double, double);

/*
 ==================== QUESTION PROMPT ================
 For a C program to calculate the roots of a Quadratic Equation.
 There are 3 possible types of solutions:
 1) No Solution (Discriminant < 0)
 2) 1 Solution (Discriminant  = 0)
 3) 2 Distinct Solutions (Discriminant > 0)
 
 Constraints: For our sanity, we will only consider equations with integer coefficients
 such that -50 <= a,b,c <= 50 and a will be non-zero.
 There are some functions defined above that you'll have to read through,
 namely:
 - int Discriminant(int a, int b, int c) - which implements the
 discriminant for you. You will have to implement conditional code on the result of the discriminant (Conditional Code refers to the if - else if - else code block),
 and returns you a value of type int.
 
There are other functions that you can refer to if you are bored.
 Namely:
 - int verifysolution() - This uses the values of x that you got and substituting back into the equation with the given coefficients, it should return a value of 0.
 - int verifynosol() - This function checks, using a different method other than the discriminant, to see if there is really no solution to a quadratic equation.
 
YOUR TASKS:
 1) Complete the user defined function that calculates the discriminant.
 2) Complete the code in main().
 Good luck!
 =====================================================
 */

// Read the following function definitions!
int Discriminant (int a, int b, int c)
{
    //TODO: TASK 1: YOUR CODE HERE----------------------
    return b * b - (4 * a * c);
    
    
    
    //-----------------------------------------------
}
/*
 It turns out that C has an inbuilt square root function in the <math.h> header file.
 This is the syntax:
 double sqrt (double x) - which computes the POSITIVE square root of the double x.
 For instance, double x = sqrt(4.000) <--- for this line of code, x has a value of 2.0000
 */
int main (void)
{
    //Declaring relevant variables - the quadratic equation is y = ax^2 + bx + c.
    // a is the coefficient of x^2, b is the coefficient of x, c is the constant term.
    int a;
    int b;
    int c;
    //Declare 2 more variables to store the solutions of the quadratic equation.
    double x1;
    double x2;
    //Declare a variable to store the discriminant
    int dis;
    int testcount; //To count test cases
    for (testcount = 1; testcount <= 400; testcount++)
    {
        //Random values for a, b and c.
        a = rand()%100 - 50;
        b = rand()%100 - 50;
        c = rand()%100 - 50;
        //First, we check that a is non-zero.
        if (a == 0)
        {
            printf("======== Test Case %d voided ======= ---> a = 0.\n", testcount);
        }
        else // This code block runs when a is non-zero.
        {
            dis = Discriminant(a,b,c);
            // Step 1: Check the number of solutions to the equation
            
            if (dis < 0) // when there is no solution
                
            {// DO NOT MODIFY ANYTHING BETWEEN THESE LINES ------------
                
                //Run verification!!
                if (verifynosol(a,b,c) == 1)
                {
                    printf("========Test Case %d ======== --> OK.\n", testcount);
                }
                else
                {
                    printf("========Test Case %d ======== --> WRONG ANSWER.\n", testcount);
                    printf("You declared no solution. But solution was found.\n");
                    return 0; //exit program prematurely.
                }
                //-------------------------------------------------------
            }
            else if (dis == 0 )// when there is 1 solution
            {
                // TODO: TASK 2: YOUR CODE HERE ----------------------
                // Write code to calculate the solution to the quadratic equation and
                // store the value in the variable x1.
                x1 = (double)(-b) / (double) a;
                
                
                
                // -------------------------------------
                if (verifysolution(a,b,c,x1,x1) == 1)
                {
                    printf("========Test Case %d ======== --> OK.\n", testcount);
                }
                else
                {
                    printf("========Test Case %d ======== --> WRONG ANSWER.\n", testcount);
                    printf("Expression: %d x^2 + %d x + %d\n", a, b, c);
                    printf("Solution: x = %lf (Repeated Solutions)\n", x1);
                    return 0; // Exit the program prematurely.
                }
                
            }
            else // 2 Distinct solutions
            {
                // TODO: TASK 3: YOUR CODE HERE ------------------------
                // Write code to calculate the solutionSSS and store it in the variables
                // x1 and x2.
                
                x1 = ((double)(-b)+ sqrt((double)(dis)))/(2*a);
                x2 = ((double)(-b)- sqrt((double)(dis)))/(2*a);
                
                // ---------------------------------------
                // Do not modify anything below!!
                if (verifysolution(a,b,c,x1,x2) == 1)
                {
                    printf("========Test Case %d ======== --> OK.\n", testcount);
                }
                else
                {
                    printf("========Test Case %d ======== --> WRONG ANSWER.\n", testcount);
                    printf("Expression: %d x^2 + %d x + %d\n", a, b, c);
                    printf("Solution: x1 = %lf, x2 = %lf\n", x1, x2);
                    return 0; // Exit the program prematurely.
                }
            }
        }
    }// end for loop
    printf(" ============================================================\n");
    printf(" 400 test cases passed. Well done!!!\n Program exiting successfully.\n");
    return 0;
}
//============================== end function main ==========================
// Do not modify anything below!
int verifysolution(int a, int b, int c, double x1, double x2)
{
    //This function takes the solutions x1 and x2 that you obtained
    // and substitutes it back into the equation, it checks if they give a value of 0
    // up correct to 3 dp.
    double expr1 = a*x1*x1 + b*x1 + c;
    double expr2 = a*x2*x2 + b*x2 + c;
    double theta = 0.0001; // To denote uncertainty
    
    if ((-theta <=expr1 && expr1 <=theta) && (-theta <=expr2 && expr2 <=theta))
    {
        return 1;
    }
    else {return 0;}
}
int verifynosol(int a, int b, int c)
{
    // The first 2 lines of code finds the vertex.
    double b_over_2a = (double)b / (2*a);
    double vertex = (double) (-1)*(a)*(b_over_2a*b_over_2a)+c;
    
    // If the vertex > 0 and coefficient of x^2 > 0 then the graph will be always positive.
    // If vertex < 0 and coefficient of x^2 < 0 then the graph will be always negative.
    // In these 2 cases, there is no solution.
    if ((a > 0 && vertex > 0) || (a < 0 && vertex < 0))
    {
        return 1;
    }
    // Otherwise, there is at least 1 intersection with the x-axis.
    else {return 0;}
}
