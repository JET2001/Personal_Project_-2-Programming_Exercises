//
//  ex4.c
//  
//
//  Created by Jon on 21/6/21.
//
/*
 ============================= QUESTION PROMPT ========================
 IMPROVING YOUR VENDING MACHINE
 
 Your program in your first iteration of the vending machine is LONG,
 and it would be really hard to follow if not for the comments
 found in the code.
 
 In this assignment, you'll be adding more flow to your implementation
 of the vending machine in ex2.c in Week 2 through the use of
 user defined functions.
 
 This assignment would require you to create 5 different functions of the following:
 
 
 
TODO: Edit the code at the points where you see the "TODO:" instruction.
 ========================================================================
 */

#include <stdio.h>
#include <math.h>
/*
--------- TODO: User Defined Function #1: ...printAvailableDrinks(...) -----------
 Refer to the function main() to see how the function is called.
 Deduce, from how the function is called in main(),
 the input parameters, and the return type of the function.
 Adapt your code from Week 2 ex2.c for the function body.
 
 Implementation Notes:
 This function should print the drinks that the user is able to select
 given the money they currently have inserted into the vending machine.
*/
// YOUR CODE HERE
// Make more lines if you want!





// ----------------------------
/*
 ---------- TODO: User Defined Function #2: ... getDrink(...) ------------
 Refer to the function main() to see how the function is called.
 Deduce, from how the function is called in main(),
 the input parameters, and the return type of the function.
 Adapt (More like copy and paste) your code from Week 2
 ex2.c for the function body.
 
 Implementation Notes:
 This function assumes that the drink number is valid as it will be checked by
 function 4 and it will also obtain the current balance of the money
 in the vending machine.
 Upon purchase of a drink, it should deduct the price of the drink selected
 (if possible) and return the new balance.
 
 If the drink_no is -1, then no action should be taken by this function.
 
 */
// YOUR CODE HERE
// Make more lines if you want!





// ----------------------------
/*
 ---------------- TODO: User Defined Function 3: ...getChange(...) ----------------
 Refer to the function main() to see how the function is called.
 Deduce, from how the function is called in main(),
 the input parameters, and the return type of the function.
 Adapt your code from Week 2 ex2.c for the function body.
 
 Implementation Notes:
 This function should calculate the minimum number of coins required to
 return the change, given the current balance.
 */
// YOUR CODE HERE
// Make more lines if you want!





// ----------------------------
/*
 ------------ TODO: User Defined Function 4: ...getAddMoremoneyStatus(...) ----------------
 Refer to the function main() to see how the function is called.
 Deduce, from how the function is called in main(),
 the input parameters, and the return type of the function.
 Adapt your code from Week 2 ex2.c for the function body.
 
 Implementation Notes:
 This function should ask the user for a code where
 0 means not to add more money
 1 means to add more money
 Any number other than these 2 digits should reprompt the user
 for a valid input.
 */
// YOUR CODE HERE
// Make more lines if you want!





// ----------------------------
/*
 ---------------- TODO: User Defined Function 5: ...getValidDrinkNum(...) ----------------
 Refer to the function main() to see how the function is called.
 Deduce, from how the function is called in main(),
 the input parameters, and the return type of the function.
 Adapt your code from Week 2 ex2.c for the function body.
 
 Implementation Notes:
 This function should ask the user for a drink number that is between -1, 1 and 5.
 -1 is a code to obtain change, which would be handled by the driver code.
 and 1 to 5 represents the drink numbers D1 to D5.
 
 If the user enters any other than these digits, this function should reprompt the
 user until a valid drink number is obtained.
 */
// YOUR CODE HERE
// Make more lines if you want!





// ----------------------------
// ----------------------------------------------------------------------

// ------------- Do not modify the below implementation -----------------
// Notice that your driver code looks more readable now with the
// implementation of the user defined functions.
// Driver Code -
int main (void)
{
    // --------------------PROGRAM PART 1---------------------
    // Cost of vending machine drinks
    int code, drink_no;
    int moneyInCents = 0;
    do
    {
        // Obtain money from user
        float new_money; int new_cents;
        printf("Put in money (in dollars): ");
        scanf("%f", &new_money);
        new_cents = round(new_money * 100);
        moneyInCents += new_cents;
        
        printf("You have %d cents.\n Would you like any of these drinks?\n", moneyInCents);
        
        // Call to User Defined Function 1
        printAvailableDrinks(moneyInCents);
        
        // Call to User Defined Function 4
        code = getAddMoreMoneyStatus();
        
    }
    while (code == 1); // If user enters more money, repeat the entire process above.
    
    // --------------- PART 2 - USER PICKING DRINKS ----------------
    do
    {
        printf("Okay. You can no longer add money.\n");
        printf("You have %d cents.\n Would you like any of these drinks?\n", moneyInCents);
        
        // Call to User Defined Function 1
        printAvailableDrinks(moneyInCents);
        
        // Call to User Defined Function 5
        drink_no = getValidDrinkNum();
        
        // Call to User Defined Function 2
        moneyInCents = getDrink(drink_no, moneyInCents);

    }
    while(drink_no != -1);
    
    // --------------- PART 3 - GET CHANGE -------------------------
    printf("Coins returned: %d\n", getChange(moneyInCents));
    return 0;
}
