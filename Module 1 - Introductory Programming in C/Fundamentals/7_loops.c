//
//  ex1.c
//
//
//  Created by Jon on 8/2/21.
//
/*
 ==================== QUESTION PROMPT ================
When I ran this code, my program CRASHES.
 Fix the ERROR in the while loop.
 Expected output:
 10  9  8  7  6  5  4  3  2  1
 =====================================================
 */
#include <stdio.h>
int main(void)
{
    //Fix the problem in the while loop
    int i;
    i = 10;
    while(i > 0)
    {
        //Print out the digit i
        printf("%d\t", i);
    }
    printf("\n");
    return 0;
}

