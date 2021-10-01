//
//  ex5.c
//  
//
//  Created by Jon on 23/6/21.
//
/*
// =========== PROBLEM DESCRIPTION ================
Write a program that takes in 2 integers m and n, separated by a space
 and lists the first 5 prime numbers within the range m and n,
where m < n.

INPUT FORMAT
 
 CONSTRAINTS
 0 <= m, n <= 2^32 - 1

Pass the informal tests to pass this implementation!

// =================================================
*/
#include <stdio.h>

// Declaring function prototypes for testing
int test_one(); int test_two(); int test_three(); int test_four(); int test_five();
int test_six(); int test_seven(); int test_eight(); int test_nine(); void informalTests();
// Global variable declaration here.
// 1 is not a prime number, so I am going to initialise all these prime numbers as 1.
unsigned int p1 = 1, p2 = 1, p3 = 1, p4 = 1, p5 = 1;

/*
// TODO: TASK #1: Check whether a given number is prime
 A prime number is divisible by anything other than itself and the value 1.
 Output a value of 0 if the number is not prime
 output a value of 1 if the number is prime.
 Remember that 1 is not a prime number.
 
 Do not adjust the function definition!!
*/
int checkPrime(unsigned int n)
{
    if (n == 0 || n == 1) return 0; // if n is 1
    for (unsigned int i = 2; i < n; i++)
    {
        // If i divides n, then there is no remainder.
        if (n % i == 0) return 0;
    }
    return 1;
        
}
// -------------- END OF TASK #1 --------------
/*
 TODO: Task #2: Assigning prime numbers
 This function assumes that you call it with a prime number as an argument.
 The goal of this function is to assign the first prime number to p1,
 second prime number to p2, third prime number to p3, fourth prime number to p4,
 fifth prime number to p5.
 
 Here's how to implement it:
 If p1 is equal to 1, that means that a prime has not been inserted into 1, so
 assign the value of the prime into the variable p1.
 If p1 is not equal to 1, that means that a prime is already in 1, so check if p2 is equal to 1
 and so on.

 */
void insertPrimes(unsigned int prime_no)
{
    if (p1 == 1) p1 = prime_no;
    else if (p2 == 1) p2 = prime_no;
    else if (p3 == 1) p3 = prime_no;
    else if (p4 == 1) p4 = prime_no;
    else if (p5 == 1) p5 = prime_no;
    else;
}
/*
 TODO: Task #3: Obtaining the first 5 prime numbers of the range.
 Implementation notes:
 Write a function that does a following -
 1) it accepts two integers as input (done for you already)
 2) it checks each integer from the lower limit to the upper limit whether its prime
    if there are less than 5 primes, using a function call to the above user defined function.
 3) If there are 5 primes or more, it stops executing and returns without checking the
    rest of the numbers.
 */
void getPrimes(unsigned int min, unsigned int max)
{
    int num_primes = 0;
    for (unsigned int i = min; i <= max; i++)
    {
        if (checkPrime(i))
        {
            num_primes++;
            insertPrimes(i);
            if (num_primes == 5) break;
        }
    }
}

/*
 TODO: Task 4: Complete function main()
 To complete this part, only print the global variable when its value is not equal to 1.
 For a variable of type unsigned int, you can use
                            printf("%lu\n", variable);
 to print out the unsigned integer.
 */
int main (void)
{
    unsigned int m, n;
    scanf("%i %i", &m, &n);
    // Print the primes to the screen.
    printf("First 5 Primes in the range of %i and %i (inclusive) are:\n", m, n );
    getPrimes(m, n);
    
    // TODO: YOUR CODE HERE!
    // Make more lines if you wish
    if (p1 != 1) printf("%i\n", p1);
    if (p2 != 1) printf("%i\n", p2);
    if (p3 != 1) printf("%i\n", p3);
    if (p4 != 1) printf("%i\n", p4);
    if (p5 != 1) printf("%i\n", p5);
    
    // ----------
    printf("Run Informal Tests on your program ?\n0 ==> NO, 1 ==> YES\n");
    int code;
    scanf("%d", &code);
    if (code == 1)
        informalTests();
    return 0;
}

int test_one()
{
    p1 = p2 = p3 = p4 = p5 = 1;
    printf("Test Case #1 --- ");
    getPrimes(1,10);
    
    if( p1 == 2 && p2 == 3 && p3 == 5 && p4 == 7 && p5 == 1)
    {
        printf("OK!\n");
        return 1;
    }
    else
    {
        printf("Wrong Answer.\n");
        return 0;
    }
}
int test_two()
{
    p1 = p2 = p3 = p4 = p5 = 1;
    printf("Test Case #2 --- ");
    getPrimes(1, 11);
    if( p1 == 2 && p2 == 3 && p3 == 5 && p4 == 7 && p5 == 11)
    {
        printf("OK!\n");
        return 1;
    }
    else
    {
        printf("Wrong Answer.\n");
        return 0;
    }
}
int test_three()
{
    p1 = p2 = p3 = p4 = p5 = 1;
    printf("Test Case #3 --- ");
    getPrimes(500, 541);
    if( p1 == 503 && p2 == 509 && p3 == 521 && p4 == 523 && p5 == 541)
    {
        printf("OK!\n");
        return 1;
    }
    else
    {
        printf("Wrong Answer.\n");
        return 0;
    }
}
int test_four()
{
    p1 = p2 = p3 = p4 = p5 = 1;
    printf("Test Case #4 --- ");
    getPrimes(104699, 104729);
    if( p1 == 104701 && p2 == 104707 && p3 == 104711 && p4 == 104717 && p5 == 104723)
    {
        printf("OK!\n");
        return 1;
    }
    else
    {
        printf("Wrong Answer.\n");
        return 0;
    }
}
int test_five()
{
    p1 = p2 = p3 = p4 = p5 = 1;
    printf("Test Case #5 --- ");
    getPrimes(1058666, 1058731);
    if( p1 == 1058671 && p2 == 1058677 && p3 == 1058683 && p4 == 1058693 && p5 == 1058711)
    {
        printf("OK!\n");
        return 1;
    }
    else
    {
        printf("Wrong Answer.\n");
        return 0;
    }
}
int test_six()
{
    p1 = p2 = p3 = p4 = p5 = 1;
    printf("Test Case #6 --- ");
    getPrimes(1058672, 1058731);
    if( p1 == 1058677 && p2 == 1058683 && p3 == 1058693 && p4 == 1058711 && p5 == 1058723)
    {
        printf("OK!\n");
        return 1;
    }
    else
    {
        printf("Wrong Answer.\n");
        return 0;
    }
}
int test_seven()
{
    p1 = p2 = p3 = p4 = p5 = 1;
    printf("Test Case #7 --- ");
    getPrimes(1299638, 1299709);
    if( p1 == 1299647 && p2 == 1299653 && p3 == 1299673 && p4 == 1299689 && p5 == 1299709)
    {
        printf("OK!\n");
        return 1;
    }
    else
    {
        printf("Wrong Answer.\n");
        return 0;
    }
}

int test_eight()
{
    p1 = p2 = p3 = p4 = p5 = 1;
    printf("Test Case #8 --- ");
    getPrimes(1299648, 1299709);
    if( p1 == 1299653 && p2 == 1299673 && p3 == 1299689 && p4 == 1299709 && p5 == 1)
    {
        printf("OK!\n");
        return 1;
    }
    else
    {
        printf("Wrong Answer.\n");
        return 0;
    }
}
int test_nine()
{
    p1 = p2 = p3 = p4 = p5 = 1;
    printf("Test Case #9 --- ");
    getPrimes(214783687, 220000000);
    if( p1 == 214783687 && p2 == 214783703 && p3 == 214783757 && p4 == 214783769 && p5 == 214783787)
    {
        printf("OK!\n");
        return 1;
    }
    else
    {
        printf("Wrong Answer.\n");
        return 0;
    }
}
int test_ten()
{
    p1 = p2 = p3 = p4 = p5 = 1;
    printf("Test Case #10 --- ");
    getPrimes(214783647, 214783647);
    if( p1 == 1 && p2 == 1 && p3 == 1 && p4 == 1 && p5 == 1)
    {
        printf("OK!\n");
        return 1;
    }
    else
    {
        printf("Wrong Answer.\n");
        return 0;
    }
}
void informalTests()
{
    printf("======================================= \n");
    printf("======================================= \n");
    printf("======================================= \n");
    printf("Running Informal Tests! \n");
    int passed = 0;
    passed += test_one(); passed += test_two(); passed += test_three(); passed += test_four();
    passed += test_five(); passed += test_six(); passed += test_seven(); passed += test_eight();
    passed += test_nine(); passed += test_ten();
    
    printf("Tests Passed: %d out of 10\n", passed);
    printf("======================================= \n");
    printf("======================================= \n");
    printf("======================================= \n");
    return;
}
