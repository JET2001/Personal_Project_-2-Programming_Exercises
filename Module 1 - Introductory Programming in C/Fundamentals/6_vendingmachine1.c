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
  
See the screenshots attached for the test cases.
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
    
        printf("You have %d cents.\nWould you like any of these drinks?\n", moneyInCents);
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
        
        
        
        
        
        // --------------------------------
        printf("\n");
        // ------------------------- TODO: END OF TASK #1 ----------------------------
        printf("Would you like to add more money?\n 1 ==> YES, 0 ==> NO \n");
        scanf("%d", &code); // This variable is declared at line 60
        // Do error checking on this variable to ensure that the user entered a value
        // EITHER 0 OR 1.
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
        

        
        
        
        
        // ------------ END OF TASK 1 CODE -------------------
        // ------------------- TODO: END OF TASK #2A ---------------------
        //Ask user to select a drink
        printf("Select a drink by entering any drink number from 1 to 5, \nEnter -1 to return your change.\n");
        
        scanf("%d", &drink_no); // This variable is declared at line 61.
        
        // ------------------ TODO: TASK #2B - Error checking
        /*
         Do error checking to make sure the user enters ONLY the following numbers:
         -1, 1, 2, 3, 4, 5.
         
         You may reference a similar version of this on the variable 'code' above
         (Just after the end of TASK #1)
         */
        // ---------- YOUR CODE HERE -------------

        
        
        
        
        
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

                
                
                //------------------
                break;
            case 3:
                //ADD YOUR CODE HERE -----------
                
                
                
                
                //------------------
                break;
            case 4:
                //ADD YOUR CODE HERE -----------

                
                
                
                
                
                //------------------
                break;
            case 5:
                //ADD YOUR CODE HERE -----------

                
                
                
                
                
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
    while(0); //<--rewrite this condition
    //  ------------------ TODO: END OF TASK #2D -------------------
    
    // --------------- PART 3 - GET CHANGE -------------------------
    int total_no_of_coins; // output variable
    // ---------- TODO: Task #3: Return Change in the form of coins -----------
    /*
     Find the minimum number of coins required for change
     Store the total number of coins returnd in the variable total_no_of_coins.
     */
    total_no_of_coins = 0;
    // ------------ YOUR CODE HERE -------------
    
    
    
    
    

    
    // ----------- TODO: END OF TASK #3 ----------
    // Make sure you have stored your answer in the variable total_no_of_coins above.
    
    printf("Coins returned: %d\n", total_no_of_coins);
    
}
