//
//  myprettynamev2.c
//  
//
//  Created by Jon on 24/6/21.
//
/*
// ============== QUESTION PROMPT ===============
Remember your Week 0 Assignment when you printed your name using printf()
 with hashes? Here's an extension to that assignment.
 
 You are given your final solution to the problem - but implement the
 program with the following characteristics:
 
 Upon running the program, ask the user to enter an integer between
 0 and 7 (both inclusive). For the integer i between 0 and 7, print out
 the first i characters of your name (instead of the full name).

// =============================================
*/
 #include <stdio.h>
int main (void)
{
    int digit; // variable for the number of characters
    // Do error checking
    do
    {
        printf("Enter a number: ");
        scanf("%d", &digit);
    }
    while ( digit < 0 || digit > 7);
    switch(digit)
    {
        case 1:
            printf("#       #\n");
            printf("  #   #  \n");
            printf("    #    \n");
            printf("  #   #  \n");
            printf("#       #\n");
            break;
        case 2:
            printf("#       #    ############\n");
            printf("  #   #            #     \n");
            printf("    #              #     \n");
            printf("  #   #            #     \n");
            printf("#       #    ############\n");
            break;
        case 3:
            printf("#       #    ############          #      \n");
            printf("  #   #            #             #   #    \n");
            printf("    #              #            #######   \n");
            printf("  #   #            #           #       #  \n");
            printf("#       #    ############     #         # \n");
            break;
        case 4:
            printf("#       #    ############          #        #       #\n");
            printf("  #   #            #             #   #      # #     # \n");
            printf("    #              #            #######     #   #   # \n");
            printf("  #   #            #           #       #    #     # # \n");
            printf("#       #    ############     #         #   #       # \n");
            break;
        case 5:
            printf("#       #    ############          #        #       #        ######\n");
            printf("  #   #            #             #   #      # #     #      #\n");
            printf("    #              #            #######     #   #   #      #     ###\n");
            printf("  #   #            #           #       #    #     # #      #      #\n");
            printf("#       #    ############     #         #   #       #      ########\n");
            break;
        case 6:
            printf("#       #    ############          #        #       #        ######    #\n");
            printf("  #   #            #             #   #      # #     #      #           # \n");
            printf("    #              #            #######     #   #   #      #     ###   # \n");
            printf("  #   #            #           #       #    #     # #      #      #    # \n");
            printf("#       #    ############     #         #   #       #      ########    ######\n");
            break;
        case 7:
            printf("#       #    ############          #        #       #        ######    #        ####### \n");
            printf("  #   #            #             #   #      # #     #      #           #        #       \n");
            printf("    #              #            #######     #   #   #      #     ###   #        #####   \n");
            printf("  #   #            #           #       #    #     # #      #      #    #        #       \n");
            printf("#       #    ############     #         #   #       #      ########    ######   ####### \n");
            break;
        default:
            printf("Code shouldn't reach here!");
            break;
    }
    
    return 0;
}
