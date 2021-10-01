//
//  ex2.c
//  
//
//  Created by Jon on 11/6/21.
//
/*
 ============================= QUESTION PROMPT ========================
 CREATING A VENDING MACHINE
 
 This program is separated into multiple parts.
 ------------- PART #1 --------------
 The first would be accepting money from the user, and lists the drinks that can
 be selected by the user given the amount of money entered.
 
 The user also has an option to put in more money.
 If the user decides to put in more money, the drinks that can be selected by the user
 is updated.
 
 You have the following drinks in your vending machine:
 D1 - which costs $2.00
 D2 - which costs $2.50
 D3 - which costs $0.90
 D4 - which costs $1.00
 D5 - which costs $1.20
 
 ------------ PART #2 ---------------
 When the user selects the drink, subtract the amount of money they entered
 with the price of that drink.
 
 Ask the user if they would like to get more drinks.
 Also ask the user if they would like to add more money at this step.
 
 ------------ PART #3 ---------------
 Once the user decides to not get anymore drinks, print out the MINIMUM number of coins
 to return the change.
 The program will obtain the amount of change owed and then print
 the MINIMUM NUMBER of coins with which that change can be made.
 
 It is given that you have an infinite number of coins of these denominations:
 - 1 cent
 - 5 cents
 - 10 cents
 - 20 cents
 - 50 cents
 - $1 dollar
 
 For example, if a user enters $9.75, the output should be 12 - 9 $1 dollar coins,
 1 50-cent coin, 1 20-cent coin, 1 5-cent coin.
 
 If the user fails to provide a non-negative value, your program should re-prompt the
 user for a valid amount again and again until the user complies.
 
 Beware the inherent imprecision of floating point values. Remember that in the code walkthrough,
 when x = 2, y = 10, x/y will not be precisely 0.20000000... if you output the value to like 50
 decimal places or so. Hence, before making change, convert the user's inputted dollars to cents
 (from a float to an int) to avoid tiny errors that might otherwise add up.
 
 To round cents to nearest cent (hence an integer), I have done it for you in the code below
 somewhere within the code block. This would convert numbers like 0.200000002980232238769531250
 to 20.
 
 Your program should behave as per the examples below.
TODO: FILL IN TEST CASES


TODO: Edit the code at the points where you see the "TODO:" instruction.
 ========================================================================
 */

#include <stdio.h>
#include <math.h>
int main (void)
{
    // --------------------PROGRAM PART 1---------------------
    // Cost of vending machine drinks
    int D1 = 200, D2 = 250, D3 = 90, D4 = 100, D5 = 120;
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
        /*
         -------------------------- TODO: TASK #1 -------------------------
         TODO: For this value of money, write a series of if statements that tell the
         TODO: user what drinks you are able to get.
         The first one has been done for you.
         */
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
        // --------------------------------
        printf("\n");
        // ------------------------- TODO: END OF TASK #1 ----------------------------
        printf("Would you like to add more money?\n 1 ==> YES, 0 ==> NO \n");
        scanf("%d", &code);
        // TODO: Do error checking on this variable code. If the user enters a value 3,
        // TODO: this should fail and you can reprompt the user for a value of either 0 or 1.
        while (code != 0 && code != 1)
        {
            printf("Input not valid!\n");
            printf("Would you like to add more money?\n 1 ==> YES, 0 ==> NO \n");
            scanf("%d", &code);
        }
    }
    while (code == 1); // If user enters more money, repeat the entire process above.
    
    // So now the user doesn't want to enter more money, we can transition to part 2 of the program.
    // Ensure that your program in TASK #1 works by compiling and testing it first!!
    // --------------- PART 2 - USER PICKING DRINKS ----------------
    do
    {
        printf("Okay. You can no longer add money.\n");
        printf("You have %d cents.\n Would you like any of these drinks?\n", moneyInCents);
        // ------------- TODO: TASK #2A- Copy and paste Code in Task #1 ------------------
        /*
         Copy and paste your code in task #1 between the lines below.
         */
        // ------------- TASK 1 CODE HERE ----------------
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
        // --------------------------------
        printf("\n");
        // ------------ END OF TASK 1 CODE -------------------
        // ------------------- TODO: END OF TASK #2A ---------------------
        //Ask user to select a drink
        printf("Select a drink by entering any drink number from 1 to 5, \nEnter -1 to return your change.\n");
        
        scanf("%d", &drink_no); // User enters drink number.
        // Declaration of the above variable can be found on line ?.
        // ------------------ TODO: TASK #2B - Error checking
        /*
         Do error checking to make sure the user enters ONLY the following numbers:
         -1, 1, 2, 3, 4, 5.
         
         You may reference some functionality from the code above.
         */
        // ---------- YOUR CODE HERE -------------
        while (drink_no < -1 || drink_no == 0 || drink_no > 5 )
        {
            printf("Input not valid!\n");
            printf("Select a drink by entering any drink number from 1 to 5, \nEnter -1 to return your change.\n");
            scanf("%d", &drink_no);
        }
        // ---------------------------------------
        // ------------------ TODO: END OF TASK #2B ------------------
        
        // ------------ TODO: TASK 2C - Make sure user has enough money -------------
        // The first two cases has been done for you.
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
                //------------------
                //---------------------- TODO: END OF TASK #2C ----------------------
                break;
            default: //Code shouldn't be able to get here.
                printf("Invalid drink number entered.\n Try again.\n");
                break;
        }
    }
    // TODO: TASK #2D: Rewrite the condition in the while loop below
    /*
     Repeat this loop each time when the user buys a drink.
     */
    while(drink_no != -1);
    //  ------------------ TODO: END OF TASK #2D -------------------
    
    // --------------- PART 3 - GET CHANGE -------------------------
    int total_no_of_coins; // output variable
    //TODO: Task #2: Implement the cash register to find the minimum number of coins required for change
    // TODO: Store the total number of coins returnd in the variable total_no_of_coins.
    // Make more lines if you want!
    total_no_of_coins = 0;
    if (moneyInCents >= 100)
    {
        total_no_of_coins += moneyInCents/100;
        moneyInCents %=100; // Get remainder of coins that cannot be distributed by giving away dollars
    }
    if (moneyInCents >= 50)
    {
        total_no_of_coins += moneyInCents/50;
        moneyInCents %= 50; // Get remainder of coins that cannot be distributed by giving away $1 and 50 cents
    }
    if (moneyInCents >= 20)
    {
        total_no_of_coins += moneyInCents/20;
        moneyInCents %= 20; //Get remainder of coins that cannot be distributed by giving away $1, 50c, 20c
    }
    if (moneyInCents >= 10)
    {
        total_no_of_coins += moneyInCents/10;
        moneyInCents %= 10; // Get remainder of coins that cannot be distributed by giving away $1, 50c, 20c, 10c
    }
    if (moneyInCents >= 5)
    {
        total_no_of_coins += moneyInCents/5;
        moneyInCents %= 5; // Get remainder of coins that cannot be distributed by giving away $1, 50c, 20c, 10c, 5c
    }
    if (moneyInCents >= 1)
    {
        total_no_of_coins += moneyInCents;
        // cents would have a value of zero now.
    }
    // ----------- TODO: END OF TASK #3 ----------
    // Make sure you have stored your answer in the variable total_no_of_coins above.
    // Print the desired output.
    printf("Coins returned: %d\n", total_no_of_coins);
    
}
