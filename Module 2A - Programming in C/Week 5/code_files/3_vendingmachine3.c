//
//  6_vendingmachine3.c
//
//
//  Created by Jon on 6/7/21.
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

// TODO: TASK #1: Make an array of size 5 to store the drinks D1 to D5.
/*
 Implementation Notes:
 Store the price of D1 at index 0, D2 at index 1, D3 at index 2, and so on.
 Initialise the array here - make this array global.
 */
// ---------- YOUR CODE HERE --------



// ------------ END TASK 1 -----------

// TODO: TASK 2 - Change D1 to D5 in your if statements indices of the respective drinks.
void printAvailableDrinks(int moneyInCents)
{
    // Notice that your variables for the drinks are no longer here.
    // This is because you declared it as a global array.
    // Recall that D1 corresponds to drinks[0], D2 corresponds to drink[1]
    // and so on.
    if (moneyInCents >= 0) // Change the '0' to something appropriate!
    {
        printf("D1 "); // the space after D1 is important!!
    }
    // YOUR CODE HERE------------------
    // Make more lines if you want.
    if (moneyInCents >= 0)  // Change the '0' to something appropriate!
    {
        printf("D2 ");
    }
    if (moneyInCents >= 0)  // Change the '0' to something appropriate!
    {
        printf("D3 ");
    }
    if (moneyInCents >= 0) // Change the '0' to something appropriate!
    {
        printf("D4 ");
    }
    if (moneyInCents >= 0) // Change the '0' to something appropriate!
    {
        printf("D5 ");
    }
    printf("\n");
}
// ------------ END TASK 2 ------------
/*
 ---------- TODO: TASK 3: Modify function ... getDrink(...) ------------
 - This function now returns void and has a new parameter - a pointer to an integer.
 Make 2 changes to the function.
 The moneyInCents pointer points to the variable moneyInCents
 1. Subtract some money from the moneyInCents variable via pass by reference.
 2. Assess drinks via the global array instead of creating local function variables.
 */
void getDrink(int drink_no, int* moneyInCents_ptr)
{
    switch (drink_no)
    {
        case -1: // Return change.
            printf("Returning change...\n");
            break;
            
        case 1:
            if (*moneyInCents >= 0) // Edit the 0 here!
            {
                printf("D1 purchased.\n");
                // Add Code here to deduct money from MoneyInCents
                

            }
            else
            {
                printf("You cannot select D1.\n Pick another drink from the list above.\n");
            }
            break;
        case 2:
            //ADD YOUR CODE HERE -----------
            if (*moneyInCents >= 0) // Edit the 0 here!
            {
                printf("D2 purchased.\n");
                // Add Code here to deduct money from MoneyInCents
                
            }
            else
            {
                printf("You cannot select D2.\n Pick another drink from the list above.\n");
            }
            //------------------
            break;
        case 3:
            //ADD YOUR CODE HERE -----------
            if (*moneyInCents >= 0) // Edit the 0 here!
            {
                printf("D3 purchased.\n");
                // Add Code here to deduct money from MoneyInCents
            }
            else
            {
                printf("You cannot select D3.\n Pick another drink from the list above.\n");
            }
            //------------------
            break;
        case 4:
            if (*moneyInCents >= 0) // Edit the 0 here!
            {
                printf("D4 purchased.\n");
                // Add Code here to deduct money from MoneyInCents
            }
            else
            {
                printf("You cannot select D4.\n Pick another drink from the list above.\n");
            }
            //------------------
            break;
        case 5:
            //ADD YOUR CODE HERE -----------
            if (*moneyInCents >= 0) // Edit the 0 here!
            {
                printf("D5 purchased.\n");
                // Add Code here to deduct money from MoneyInCents
            }
            else
            {
                printf("You cannot select D5.\n Pick another drink from the list above.\n");
            }
            break;
        default: //Code shouldn't be able to get here.
            printf("Invalid drink number entered.\n Try again.\n");
            break;
    }
}
// ------------ END OF TASK 3 ------------
/*
 ----------- TODO: TASK 4: Modify function ...getAddMoremoneyStatus(...) -----
 There is one change to the function, instead of returning a value for code, this function
 now accepts a variable that is a pointer to the value of the variable code.
 
 You are tasked to pass this variable code by reference and still retain the below
 functionality:
 
 This function should ask the user for a code where
 0 means not to add more money
 1 means to add more money
 Any number other than these 2 digits should reprompt the user
 for a valid input.
 
 The below is the suggested implementation of the function from ex4.c of Week 3, Module 1.
 */
void getAddMoreMoneyStatus(int* code_ptr)
{
    /*
     // 1 ==> user wants to add more money
    // 0 ==> User doesn't want to add money
    // Any number should reprompt the user
    printf("Would you like to add more money?\n 1 ==> YES, 0 ==> NO \n");
    scanf("%d", code);
    // Error checking on code
    while (*code != 0 && *code != 1)
    {
        printf("Input not valid!\n");
        printf("Would you like to add more money?\n 1 ==> YES, 0 ==> NO \n");
        scanf("%d", code);
    }
     */
    
}
// --------- END TASK #4 -------

// Changes to this function has been done for you.
void getValidDrinkNum(int* drink_no)
{
    
    printf("Select a drink by entering any drink number from 1 to 5, \nEnter -1 to return your change.\n");
    scanf("%d", drink_no); // User enters drink number.
    
    while (*drink_no < -1 || *drink_no == 0 || *drink_no > 5 )
    {
        printf("Input not valid!\n");
        printf("Select a drink by entering any drink number from 1 to 5, \nEnter -1 to return your change.\n");
        scanf("%d", drink_no);
    }
}

/*
 ---------------- TODO: TASK 5A: ...getChange(...) ----------------
This function is left as it was in ex4.c of Week 3 Module 1.
 
 Implementation Notes:
 This function should return the minimum number of coins required to
 return the change, given the current balance.
 
 This function should also tell you the number of
 - $1 coins,
 - 50c coins,
 - 20c coins,
 - 10c coins,
 - 5c coins,
 - 1c coins
 that constitute the value of the minimum number of coins, using pass by reference.
 */
// YOUR CODE HERE
// Add more lines if you want!
int getChange(int moneyInCents)
{
    int total_no_of_coins = 0;
    total_no_of_coins += moneyInCents/100;
    moneyInCents %=100; // Get remainder of coins that cannot be distributed by giving away dollars
    total_no_of_coins += moneyInCents/50;
    moneyInCents %= 50; // Get remainder of coins that cannot be distributed by giving away $1 and 50 cents

    total_no_of_coins += moneyInCents/20;
    moneyInCents %= 20; //Get remainder of coins that cannot be distributed by giving away $1, 50c, 20c
    
    total_no_of_coins += moneyInCents/10;
    moneyInCents %= 10; // Get remainder of coins that cannot be distributed by giving away $1, 50c, 20c, 10c
    
    total_no_of_coins += moneyInCents/5;
    moneyInCents %= 5; // Get remainder of coins that cannot be distributed by giving away $1, 50c, 20c, 10c, 5c

    total_no_of_coins += moneyInCents;
        // cents would have a value of zero now.
    
    return total_no_of_coins;
}
// ---------- END TASK 5A ---------

// Driver Code
int main (void)
{
    // Cost of vending machine drinks
    int code; // Code to catch a value to make a decision for the program.
    int drink_no;
    int moneyInCents = 0;
    do
    {
        float new_money; int new_cents;
        printf("Put in money (in dollars): ");
        scanf("%f", &new_money);
        new_cents = round(new_money * 100);
        moneyInCents += new_cents;
        
        printf("You have %d cents.\n Would you like any of these drinks?\n", moneyInCents);
        
        printAvailableDrinks(moneyInCents);
        
        getAddMoreMoneyStatus(&code); // remember how 'pointers are just addresses'? so you can do this!!
        
    }
    while (code == 1); // If user enters more money, repeat the entire process above.
    
    // --------------- PART 2 - USER PICKING DRINKS ----------------
    do
    {
        printf("Okay. You can no longer add money.\n");
        printf("You have %d cents.\n Would you like any of these drinks?\n", moneyInCents);
        
        printAvailableDrinks(moneyInCents);
        
        // TODO: Task 6: Modify the function call to getValidDrinkNum()
        // Look around for clues!
        
        getValidDrinkNum(NULL); // change NULL to something more appropriate!
        
        //------- END TASK 6 -------
        
        // Call to User Defined Function 2
        getDrink(drink_no, &moneyInCents);

    }
    while(drink_no != -1);
    
    // TODO: TASK 5B: Modify your function call to getChange() --------
    // Use the below variables to store the breakdown of coins.
    // Pass the variables below by reference to the function getChange().
    int one_dollar = 0, fifty_cents = 0, twenty_cents = 0, ten_cents = 0, five_cents = 0, one_cents = 0;
    
    int total_no_of_coins = getChange(moneyInCents); // EDIT THIS!
    // ----------------- END OF TASK 5B ----------------
    
    // ----------- DO NOT MODIFY THE IMPLEMENTATION BELOW -----------
    printf("Coins returned: %d\n", total_no_of_coins);
    printf("$1: %d \n", one_dollar);
    printf("$0.50: %d \n", fifty_cents);
    printf("$0.20: %d \n", twenty_cents);
    printf("$0.10: %d \n", ten_cents);
    printf("$0.05: %d \n", five_cents);
    printf("$0.01: %d \n", one_cents);
    return 0;
}
