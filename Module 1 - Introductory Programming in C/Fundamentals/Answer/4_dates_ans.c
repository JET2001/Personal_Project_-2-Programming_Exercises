//
//  ex3.c
//  
//
//  Created by Jon on 16/4/21.
//
/*
 ==================== QUESTION PROMPT ================
 Write a C program to convert a given integer (in days) to years, months and days,
assuming that all months have 30 days and all years have 365 days.
 
 This is to test your understanding of the following operators:
 Division (or Quotient) operator ( / )
 Modulo (or Remainder) operator ( % )
 
 Your expected printed values should be:
 1369 Years
 10 Months
 15 Days
 =====================================================
 */
#include <stdio.h>
int main (void)
{
    // Variable name will accept 50 characters, including spaces.
    int totaldays = 500000;
    
    // Defining some variables for you to use in your implementation:
    int daycount;
    int monthcount;
    int yearcount;
    // YOUR CODE HERE -----------------------------------
    yearcount = totaldays / 365;
    totaldays = totaldays % 365; // get the remainder of the days that cannot be classified into years.
    monthcount = totaldays / 30; // Find number of months.
    daycount = totaldays % 30; // Find the number of days that cannot be classified into months.
    //---------- Do not modify below this line.--------------
    printf("%d Years\n%d Months\n%d Days\n", yearcount, monthcount, daycount);
    
    return 0;
}
