//
//  ex2.c
//  
//
//  Created by Jon on 16/4/21.
//
/*
 ==================== QUESTION PROMPT ================
 Write a C program to compute the perimeter and area of a rectangle of height 7 cm,
 and a width of 5 cm.
 Print the perimeter and area in square metres.
 Expected output should be:
 Perimeter = 0.24000... metres
 Area = 0.035000... metres
 (The number of decimal places don't matter)
 =====================================================
 */
#include <stdio.h>
int main (void)
{
    // First, I will help you to initialise all the variables you need here.
    float height, width, area, perimeter; //These are literally named
    // Store the height in the variable height
    height = 0.07;
    
    // Store the width in the variable width
    width = 0.05;
    
    // Store the area of the rectangle in the variable for area
    area = height * width;
    
    // Store the perimeter of the rectangle in the variable for perimeter
    perimeter = 2*height + 2*width;
    // -------- DO NOT EDIT THIS LINE -----------
    // This line will print the area and perimeter to the screen.
    printf("Area of Rectangle is %f square metres. \nPerimeter of rectangle is %f metres.\n", area, perimeter);
    return 0;
}
