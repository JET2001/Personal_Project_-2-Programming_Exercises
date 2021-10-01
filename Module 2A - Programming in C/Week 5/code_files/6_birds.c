//
//  4_birds.c
//
//
//  Created by Jon on 6/7/21.
//

#include <stdio.h>

int mostFrequentBird(int arr[])
{
    // Your Code Here!



    return 0;
}

int main (void)
{
    int n; // size of array
    scanf("%d",&n); // input line 1
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]); // input line 2
    int mostFrequentBirdID = mostFrequentBird(arr);
    // The output is incomplete!
    printf("%d\n", mostFrequentBirdID);
    return 0;
}
