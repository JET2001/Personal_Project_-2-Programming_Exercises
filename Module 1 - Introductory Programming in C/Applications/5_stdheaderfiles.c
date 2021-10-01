//
//  5_stdheaderfiles.c
//
//
//  Created by Jon on 11/7/21.
//

#include <stdio.h>
#include <math.h>

// Code to create a temporary stop to the program.
// This is a technique typically used for debugging.
// I am using a function to do this to shorten the chunk of code
void breakpoint(void)
{
    // Create a random dummy variable
    int debug;
    static int i = 1;
    printf("Program has reached the end of a PART %d. Enter any number to proceed:\n", i);
    scanf("%d", &debug);        //this variable will catch whatever input
                                //the user enters. This variable is not used,
                                //and it will go out of scope at the end of
                                //the function
    i++; // increment i - this function will only be called twice.
    printf("======= Running Part %d now ======= \n", i);
}
int main (void)
{
    /*
     =======================================================
     TODO: PROGRAM PART 1
     Between each of the printf () statements in each part.
     Ensure that there is a lag of two seconds.
     =======================================================
     */
    printf("Each\n");
    printf("word\n");
    printf("should\n");
    printf("appear\n");
    printf("after\n");
    printf("two\n");
    printf("seconds\n");
    // ====================== END PART 1 ===================
    // Create a breakpoint in the program
    breakpoint();
    /*
     =======================================================
     TODO: PROGRAM PART 2
     Use the assert() function to ensure the value that the
     value the user enters is non-negative.
     =======================================================
     */
    
    int moneyInCents = 0;
    float new_money; int new_cents;
    scanf("%f", &new_money);
    new_cents = round(new_money * 100);
    moneyInCents += new_cents;
    printf("You have %d cents.\n Would you like any of these drinks?\n", moneyInCents);
    
    // ====================== END PART 2 ===================
    // Create a breakpoint in the program
    breakpoint();
    /*
     =======================================================
     TODO: PROGRAM PART 3
     Use time functions defined in time.h to stop the execution of
     this infinite loop after 1 second.
     
     NOTE:
     You may run into a lot of issues here! So Comment out
     Part 1 and Part 2 above and make sure this runs as expected,
     before running the program as a whole.
     
     =======================================================
     */
    // Your code here
    // Make more lines if you want!
    int i = 1;
    // Hint: Add initialiser, conditions and increment components to the for loop!!
    for (;i<10;)
    {
        printf("%d\n", i);
        i++;
    }
    // =============== END PART 3 ==========================
    return 0;
}
