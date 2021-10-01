//
//  5_classification.c
//  
//
//  Created by Jon on 29/7/21.
//

#include <stdio.h>
#include <stdlib.h>
// Prototype
void getstats(const char filename[], int *male, int *female, int *error);

// Any Additional Functions you create enter their prototypes here:


// Driver code
int main(void)
{
    char filename[50];
    scanf("%s", filename);
    int male = 0, female = 0, error = 0; // initialise 3 variables to store results
    getstats(filename, &male, &female, &error);
    
    printf("%d %d %d\n", male, female, error);
    return 0;
}

// ----- Implementation below -----
void getstats(const char filename[], int* male, int* female, int* error)
{
    // YOUR CODE HERE
    
    
    return;
}

