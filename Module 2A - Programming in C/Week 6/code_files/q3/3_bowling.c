//
//  1_bowling.c
//  
//
//  Created by Jon on 29/7/21.
//

#include <stdio.h>
// Prototypes
void calculateBowlingScores(int breakdown[21], int total[10]);


// These are utility functions - where they return a value 1 if true
// and a value 0 if false. These aren't sufficient, make more utility functions
// and use them to simplify your implementation!
// These functions check whether index i is a first shot or second shot.
int firstShot(int i){return (i!=20 && i % 2 == 0);}
int secondShot(int i){return (i % 2 == 1);}


// Driver Code
int main (void)
{
    // Create an array of size 21 to store the breakdown.
    int breakdown[21];
    
    // The input format is not complete!
    for (int i = 0; i < 21; i++ ) scanf("%d",&breakdown[i]);
        
    
    // Create an array to store results. Size 10 for 10 frame game.
    // Initialise all values to 0.
    int total_score[10] = {0};
    // Pass these two arrays into the function to calculate bowling scores.
    calculateBowlingScores(breakdown, total_score);
    
    // Output bowling scores to the screen.
    for (int i = 0; i < 10; i++)
        printf("%d ",total_score[i]);
    printf("\n");
    
}


// --- Implementation below -------
void calculateBowlingScores(int breakdown[21], int total[10])
{
    // Your code here
    
    
    return;
}
