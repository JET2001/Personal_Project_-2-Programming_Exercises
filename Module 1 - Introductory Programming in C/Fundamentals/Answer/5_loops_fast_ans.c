//
//  ex1_ans.c
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
 In this case, k(k+1)/2 <= n,
 Now solve the inequality to find the minimum value of k for a positive value of n.
 You only have to edit the code at the 'TODO:' portions.
 A lot of reading and understanding what is going on here.
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
        printf("Enter a value for n: ");
        scanf("%llu", &n);
        unsigned long long k;
        
        // Write the expression WITHIN the square root here
        // TODO: Answer 1
        unsigned long long exp = 1+8*n;
        // Square root the expression
        long double sqrted_exp = sqrtl((long double) exp);
        
        // Using the variables sqrted_exp and the rest of your quadratic formula.
        // TODO: Answer 2
        double double_k = (-1 + sqrted_exp)/2; // Edit this!
        // Calculate value of k
        k = (unsigned long long) ceil((double)double_k);

        //Print the value of k.
        printf("k = %llu\n", k);
    }
    return 0;
}
