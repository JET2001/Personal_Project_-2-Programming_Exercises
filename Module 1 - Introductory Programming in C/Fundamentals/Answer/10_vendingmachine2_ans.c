//
//  ex4_ans.c
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
 
 Implementation Notes:
 This function should print the drinks that the user is able to select
 given the money they currently have inserted into the vending machine.
*/
// YOUR CODE HERE
// Make more lines if you want!
void printAvailableDrinks(int moneyInCents)
{
    int D1 = 200, D2 = 250, D3 = 90, D4 = 100, D5 = 120;
    if (moneyInCents >= D1)
    {
        printf("D1 "); // the space after D1 is important!!
    }
    // YOUR CODE HERE------------------
    // Make more lines if you want.
    if (moneyInCents >= D2)
    {
        printf("D2 ");
    }
    if (moneyInCents >= D3)
    {
        printf("D3 ");
    }
    if (moneyInCents >= D4)
    {
        printf("D4 ");
    }
    if (moneyInCents >= D5)
    {
        printf("D5 ");
    }
    printf("\n");
}
// --------------------
/*
 ---------- TODO: User Defined Function #2: ... getDrink(...) ------------
 Refer to the function main() to see how the function is called.
 Deduce, from how the function is called in main(),
 the input parameters, and the return type of the function.
 
 Implementation Notes:
 This function assumes that the drink number is valid as it will be checked by
 function 4 and it will also obtain the current balance of the money
 in the vending machine.
 Upon purchase of a drink, it should deduct the price of the drink selected
 (if possible) and return the new balance.
 
 If the drink_no is -1, then no action should be taken by this function.
 */
int getDrink(int drink_no, int moneyInCents)
{
    int D1 = 200, D2 = 250, D3 = 90, D4 = 100, D5 = 120;
    switch (drink_no)
    {
        case -1: // Return change.
            printf("Returning change...\n");
            break;
            
        case 1:
            if (moneyInCents >= D1)
            {
                printf("D1 purchased.\n");
                moneyInCents = moneyInCents - D1;
            }
            else
            {
                printf("You cannot select D1.\n Pick another drink from the list above.\n");
            }
            break;
        case 2:
            //ADD YOUR CODE HERE -----------
            if (moneyInCents >= D2)
            {
                printf("D2 purchased.\n");
                moneyInCents = moneyInCents - D2;
            }
            else
            {
                printf("You cannot select D2.\n Pick another drink from the list above.\n");
            }
            //------------------
            break;
        case 3:
            //ADD YOUR CODE HERE -----------
            if (moneyInCents >= D3)
            {
                printf("D3 purchased.\n");
                moneyInCents = moneyInCents - D3;
            }
            else
            {
                printf("You cannot select D3.\n Pick another drink from the list above.\n");
            }
            //------------------
            break;
        case 4:
            //ADD YOUR CODE HERE -----------
            if (moneyInCents >= D4)
            {
                printf("D4 purchased.\n");
                moneyInCents = moneyInCents - D4;
            }
            else
            {
                printf("You cannot select D4.\n Pick another drink from the list above.\n");
            }
            //------------------
            break;
        case 5:
            //ADD YOUR CODE HERE -----------
            if (moneyInCents >= D5)
            {
                printf("D5 purchased.\n");
                moneyInCents = moneyInCents - D5;
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
    return moneyInCents;
}

/*
 ---------------- TODO: User Defined Function 3: ...getChange(...) ----------------
 Refer to the function main() to see how the function is called.
 Deduce, from how the function is called in main(),
 the input parameters, and the return type of the function.
 
 Implementation Notes:
 This function should calculate the minimum number of coins required to
 return the change, given the current balance.
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
/*
 ---------------- TODO: User Defined Function 4: ...getAddMoremoneyStatus(...) ----------------
 Refer to the function main() to see how the function is called.
 Deduce, from how the function is called in main(),
 the input parameters, and the return type of the function.
 
 Implementation Notes:
 This function should ask the user for a code where
 0 means not to add more money
 1 means to add more money
 Any number other than these 2 digits should reprompt the user
 for a valid input.
 */
int getAddMoreMoneyStatus(void)
{
    // 1 ==> user wants to add more money
    // 0 ==> User doesn't want to add money
    // Any number should reprompt the user
    int code;
    printf("Would you like to add more money?\n 1 ==> YES, 0 ==> NO \n");
    scanf("%d", &code);
    // Error checking on code
    while (code != 0 && code != 1)
    {
        printf("Input not valid!\n");
        printf("Would you like to add more money?\n 1 ==> YES, 0 ==> NO \n");
        scanf("%d", &code);
    }
    
    return code;
}
/*
 ---------------- TODO: User Defined Function 5: ...getValidDrinkNum(...) ----------------
 Refer to the function main() to see how the function is called.
 Deduce, from how the function is called in main(),
 the input parameters, and the return type of the function.
 
 Implementation Notes:
 This function should ask the user for a drink number that is between -1, 1 and 5.
 -1 is a code to obtain change, which would be handled by the driver code.
 and 1 to 5 represents the drink numbers D1 to D5.
 
 If the user enters any other than these digits, this function should reprompt the
 user until a valid drink number is obtained.
 */
int getValidDrinkNum(void)
{
    int drink_no;
    printf("Select a drink by entering any drink number from 1 to 5, \nEnter -1 to return your change.\n");
    scanf("%d", &drink_no); // User enters drink number.
    
    while (drink_no < -1 || drink_no == 0 || drink_no > 5 )
    {
        printf("Input not valid!\n");
        printf("Select a drink by entering any drink number from 1 to 5, \nEnter -1 to return your change.\n");
        scanf("%d", &drink_no);
    }
    
    return drink_no;
}
// ------------- Do not modify the below implementation -----------------
// Driver Code -
int main (void)
{
    // --------------------PROGRAM PART 1---------------------
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
    
    // Call to User Defined Function 3
    int total_no_of_coins = getChange(moneyInCents);
    
    printf("Coins returned: %d\n", total_no_of_coins);
    return 0;
}
