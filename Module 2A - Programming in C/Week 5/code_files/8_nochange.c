//
//  8_nochange.c
//
//
//  Created by Jon on 6/7/21.
//

#include <stdio.h>

void SelectionSort(int arr[])
{
    //Paste your code from Q2 here.
    // Replace this entire segment if your code is in a different format!

}

// Implement the non-constructible change function here
int nochange(int coins[])
{
    // Your code here


    return 0; // Edit this too!
}

// Driver code
int main(void)
{
    int n;
    scanf("%d", &n); // Input line 1
    int coins[n]; // Create an array for coins denominations
    for (int i = 0; i < n; i++) scanf("%d", &coins[i]); //Input line 2
    printf("%d\n", nochange(coins)); // Output line 1
    return 0;
}
// Question done! Did you finish it in 30 minutes?
