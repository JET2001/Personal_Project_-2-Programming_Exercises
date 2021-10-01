//
//  1_leftrotation.c
//
//
//  Created by Jon on 6/7/21.
//
#include <stdio.h>
// Define any other functions here if you are calling other functions
// from the function LeftRotate().


// Function Definition for leftrotate
// Add more function parameters or user defined functions if you would like.
// Adjust any function calls below if you decide to do so!
void LeftRotate(int arr[], int num_rotations)
{
    // Your code here

}
int main (void)
{
    int s;
    scanf("%d",&s); // First line of input
    int arr[s]; // Create array of size s
    for (int i = 0; i < s; i++) scanf("%d", &arr[i]); // Second line of input
    int n;
    scanf("%d", &n); // Third line of input

    // Function You Need To Implement
    // Edit this function call if you decide to add more parameters!
    LeftRotate(arr, n);

    //Print output
    for (int i = 0; i < s; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
