//
//  ex1_naive.c
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
 Output: 3
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
 YOU DO NOT NEED TO EDIT THIS FILE!
 */
#include <stdio.h>

int main (void)
{
    unsigned long long n; // Variable for n
    for( ; ; )//Infinite Loop
    {
        printf("Enter a value for n: ");
        scanf("%llu", &n);
        unsigned long long i, sum = 0;
        
        for (i = 0; ; i++)
        {
            sum = sum + i;
            if (sum >= n) break;
            
        }
        printf("k = %llu\n", i);
    }
    return 0;
}
