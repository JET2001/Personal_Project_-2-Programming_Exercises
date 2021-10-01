//
//  ex2.c
//  
//
//  Created by Jon on 16/4/21.
//
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//The sine and cosine function has been written for you already.
double sine(double x)
{
    
    return (sin(x));
}
double cosine(double x)
{
    return (cos(x));
}
/*
 ==================== QUESTION PROMPT ================
 Write a C program to calculate and print out the TANGENT of the random integer angle x,
 where x is by default in radians.
 Only use the functions defined above.
 =====================================================
 */
int main(void)
{
    // Declare a variable for tangent, sine and cosine here.
    double tangent = 0;
    double sine_;
    double cosine_;
    double PI = 3.141592654;
    /*This is an example of a classic STRESS TEST. Analyse the while loop here,
     it is going to run 400 tests on your implementation.
     If your program passes a stress test, it will be usually free from errors.
     */
    int valid = 1;
    int testcount = 1;
    while (valid == 1 && testcount <= 400)
    {
        double x = rand()%100000 + (double)(rand()%100000)/100000; // Print random numbers between 0 to 100000 (within range of double don't worry)
        // ---------- Calculate the value of tangent of x here------------
        //STEP 1: Store the value of sine(x) in the variable you declared for sine.
        
        
        //STEP 2: Store the value of cosine(x) in the variable you declared for cosine.
        
        
        //STEP 3: Store the value of tangenet(x) in the variable above declared for tangent,
        // do this using the variables sine and cosine ONLY.

        
        // ------ YOUR CODE SHOULD NOT GO PAST THIS COMMENT.
        //See the debugger at work
        //Check if calculated tangent lies within acceptable range of values
        if(tan(x)-0.0001 <= tangent && tangent <= tan(x)+0.0001)
        {
            printf("===== Test Case %d ==========\n x = %lf --- OK\n",
                   testcount, x);
            if (testcount == 400)
            {
                printf("400 test cases passed. Well done! \n Program exiting successfully. \n");
            }
            testcount = testcount+1; // increment testcount by 1 - this line of code should be VERY FAMILIAR if you did ex1.
        }
        else
        {
            printf("===== Test Case %d - WRONG ANSWER ======== \n", testcount);
            printf("x = %lf \n", x);
            printf("Your Value: %lf \nExpected Value: %lf\n", tangent, tan(x));
            valid = 0; // This will cause the while loop to break.
        }
    }
    return 0;
}

