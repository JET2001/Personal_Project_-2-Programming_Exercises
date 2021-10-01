//
//  5_stdheaderfiles.c
//
//
//  Created by Jon on 11/7/21.
//
// Answer for PART 3
#include <stdio.h>
#include <time.h> // for part 3

int main (void)
{
    int i = 1;
    double seconds = 1.0;  // double difftime(time_t end, time_t start)
    time_t start = time(NULL);
    const time_t time_start = time(NULL);
    for (time_t timer = time(NULL); difftime(timer, start) < seconds ; time(&timer))
    {
        printf("%d\n", i);
        i++;
    }
    const time_t time_end = time(NULL);
    // Debug
    double time_taken = difftime(time_end, time_start);
    printf("%lf\n", time_taken);
    return 0;
}
