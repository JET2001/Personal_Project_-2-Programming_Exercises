//
//  ex1.c
//  
//
//  Created by Jon on 16/4/21.
//
/*
 ==================== QUESTION PROMPT ================
 Write a C program to print your name, your YEAR of birth and mobile number.
 =====================================================
 */
#include <stdio.h>
int main (void)
{
    // Variable name will accept 50 characters, including spaces.
    char name[50] = "Jonathan Teo"; // <--- Write your name between the double quotes " "
    
    // Variable year of birth will only accept integers < 32568. So it wouldn't be a problem to store the year in it.
    short year = 2001; // <---- EDIT THIS
    
    // Now write down a variable which can store your mobile number. Think closely of the data type before writing this down. Write the most space efficient data type for this!
    int mobile = 98231539; // <----- edit the ENTIRE line.
    
    // -------------Do not modify the code below---------------
    printf("My name is %s, I was born in %hi, \nMy mobile is %d. \n", name, year, mobile);
    
    return 0;
}
