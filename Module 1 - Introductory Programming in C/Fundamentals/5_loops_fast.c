//
//  ex1.c
//  
//
//  Created by Jon on 27/5/21.
//
/*
 ============================= QUESTION PROMPT ========================
 Find the smallest integer k such that
                0 + 1 + 2 + ... + k-2 + k-1 + k >= n,
 where n is a large integer that a user can enter.
 
 The for loop from the lecture has been implemented for you below.
 Compile the Program and run it to see how the for loop
 behaves when you enter large values of n.
 
 You'll see that for large values of n (Test Case 4, 5 and 6), you'll realise that
 the for loop is actually VERY SLOW.
 
 CONSTRAINTS: 0 <= n < 2.30 x 10^18
 When you're done, comment the for loop out and implement your
 more efficient algorithm and test it
 on the following inputs:
 =========== TEST CASE 1 ===========
 Input: 0
 Output: 0
 ========== TEST CASE 2 ============
 Input: 5
 Output: 1
 ========== TEST CASE 3 ============
 Input: 55
 Output: 10
 ========== TEST CASE 4 ============
 Input: 92233720368540
 Output: 13581879
 ========== TEST CASE 5 ============
 Input: 1223372036854775807
 Output: 1564207171
 ========== TEST CASE 6 ============
 Input: 1993372036854775807
 Output: 1996683268
 ================================================
 WARNING: This program will not terminate once it has started running.
 After running the program, press CRTL+C to terminate it.
 */
#include <stdio.h>
#include <math.h>
/*
 HINT: The sum of arithmetic progression for  1 + ... +k  = k(k+1)/2.
 In this case, k(k+1)/2 >= n,
 Now solve the inequality to find the minimum value of k for a positive value of n.
 You only have to edit the code at the 'TODO:' portions.
 There are comments in the code to help you out!
 All the best!
 */

int main (void)
{
    // -------- DO NOT MODIFY THE CODE BETWEEN THESE LINES marked with (*)------
    // **********************************************************
    unsigned long long n; // Variable for n
    for( ; ; )//Infinite Loop
    {
        // This prints a message for the user to input the value of n.
        printf("Enter a value for n: ");
        // This catches the input from the user,
        // and stores the user's input in the variable n.
        scanf("%llu", &n);
        
        unsigned long long k, sum = 0;
    // *********************************************************
        
        // TODO: Write the expression within the square root here
        unsigned long long exp = ???; // Edit the ??? into something else!
        
        // Do not edit the line below:
        // *********************************************************
        /*
         The sqrt is a function and we'll cover functions in Week 3 - Functions are like in math,
         y = F(x), y is the output of the function, and x is the input of the function,
         and different functions manipulate the value of x to different things.
         
         The sqrt function below takes an input of type DOUBLE and square roots it.
         It's output is of type double and its output(y) (or the square rooted value of the
         expression is stored in the variable sqrted_exp.
         */
        double sqrted_exp = sqrt((double) exp);
        // *********************************************************
        
        // Using the variables sqrted_exp and the rest of your quadratic formula,
        // TODO: Calculate the value of k, the result of the quadratic formula.
        // TODO: It is of type double because we are not ready to convert it back to an integer just yet. So store it in the variable double_k for now.
        double double_k = ???; // Edit the ??? into something else!
        
        // At this point your value of k is a double, so round it up to an
        // integer using a ceiling function.
        // Do not edit anything beneath these lines:
        // *********************************************************
        /*
         Another function that is provided in C is ceil() function. Here's how the ceil function
         works - it is a function that returns the smallest INTEGER that is greater than or equal to
         an expression.
         So the ceil(5.5) =6, ceil(-5.1) = -5, ceil(5) = 5
         So we use this to get the smallest value of k here, and since it is an integer,
         and we also convert its type to unsigned long long,
         which is the type that we declared k in at line 70.
         */
        k = (unsigned long long) ceil(double_k);
        // *********************************************************
        // --------------- DO NOT MODIFY THE CODE BENEATH THIS LINE---------------------
        // *********************************************************
        printf("k = %llu\n", k);
    }
    return 0;
    // *********************************************************
}
