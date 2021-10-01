//
//  7_samestring.c
//
//
//  Created by Jon on 6/7/21.
//

#include <stdio.h>

/*
 Write your code in this function!
 s1 and s2 represent the strings
 max_idx is a pointer to the variable max_idx, assign it the maximum index
 where s1 and s2 are lexicographically equal.

 Return 0 if the strings are not lexicographically equal.
 Return 1 if the strings are.
 */
int lex_equal(char s1[], char s2[], int* max_idx)
{
    // Your code here!


    return 0;
}

// Do not modify any of the lines that are concerned with input and output here.
int main(void)
{
    int n;
    scanf("%d", &n); // Input line 1
    // Create 2 arrays, all values in these 2 arrays are initialised to an
    // ASCII value to the character 0.

    char string1[n];
    char string2[n];
    // Initialise all values to 0 - since n is a maximum character count,
    // there will still be parts of the character array unfilled.
    // Initialise all to 0 so that when the strings are lexicographically equal,
    // the entire string (including the values to the (n-1)th character,
    // will be lexicographically equal.
    for(int i = 0; i < n; i++) string1[i] = 0;
    for(int i = 0; i < n; i++) string2[i] = 0;

    int s1, s2;
    // You'll probably have a lot of questions regarding the input
    // formats below, so I prepared a little something in the end notes of
    // the program.
    scanf("%d ", &s1); // Input line 2
    scanf("%[^\n]s", string1); // Input line 2 - See end notes
    scanf("%d ", &s2); // Input line 3
    scanf("%[^\n]s", string2); // Input line 3 - See end notes
    int max_idx = -1;
    int lex_true = lex_equal(string1, string2, &max_idx);
    if (lex_true == 1) // lex equal
        printf("%d\n", lex_true);
    else // not lex equal
    {
        printf("%d\n", 0);
        printf("%d\n", max_idx);
    }
    return 0;
}

/*
 END NOTE:
 Inputting strings are quite tricky, because the compiler does
 not know where 1 string starts and another string ends.
 So we use some integer variables s1 and s2 to mark the start and end
 of the strings.


 You'll probably be wondering what those format specifiers in scanf()
 refer to:
 I've also never used this in my one year of coding up until this point,
 where I have the pressure of making this assignment for you that I
 actually come across this!

 In the following GeeksforGeeks article,
 https://www.geeksforgeeks.org/taking-string-input-space-c-3-different-methods/
 I used case 4 to take in the inputs.
 [] is the scanset character. ^\n tells the compiler to take input until a
 newline character is encountered.

 The ^ is an XOR(Exclusive OR) operator - it means that it will return true
 (the value 1) when a character DOESN'T match the newline character.

 When the newline character is encountered, the XOR operator ^ returns FALSE
 to read the string, so we use %[^\n]s instead of %s. This would allow us to
 terminate the reading of the string.


 Also note an additional detail in the implementation of the input -
 See the line scanf("%d ", &s1) and the line scanf("%d ", &s2);
 Note that there is a SPACE after the %d in this case, this is actually to
 ensure that the string starts only when the first character is encountered,
 and the compiler does not read in the SPACE after the number as part of the
 input string.

 After your program works on the test cases, you can remove the space after
 the %d and see that the compiler actually read in the space after the digit
 into string1 and string2.
 */
