//
//  2_selectionsort.c
//  
//
//  Created by Jon on 6/7/21.
//

#include <stdio.h>
// Add more user defined functions or parameters if you would like.
// Adjust the function calls in main() if you do so.
void SelectionSort(int arr[])
{
    // Your Code here
    
    
}
// Driver code to handle IO
int main (void)
{
    int n;
    scanf("%d", &n); // Input line 1
    int arr[n];
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]); // Input line 2
    
    // Function that you need to implement
    SelectionSort(arr);
    
    // Print output
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
