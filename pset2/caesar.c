// Created by David Tran
// For CS50X

// Libaries
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define alphabet_length 26


// Main Function
int main(int argc, string argv[])
{
    // Break if arguements are not 2
    if (argc != 2)
    {
        printf("1 \n");
        return 1;
    }
    else
    {
        // Break if 2nd arguement (K) is negative
        if (argv[1] < 0)
        {
            printf("0 \n");
            return 0;
        }
        else
        {
            // Store K as value 
            int k_cipher = (atoi(argv[1]) % 26);
            
            // Prompt user for string
            string user_string = GetString();
            
            // Loop through each char in user string
            for (int i = 0, n = strlen(user_string); i < n; i++)
            {
                
                // Check if in alphabet
                if (isalpha(user_string[i]))
                {
                    
                    // Check if uppercase and wrap from Z -> A
                    if (isupper(user_string[i]) && user_string[i]+k_cipher > 'Z')
                    {
                        printf("%c", user_string[i]+k_cipher-alphabet_length);
                    }
                    
                    // Check if lowercase and wrap from z -> a
                    else if (islower(user_string[i]) && user_string[i]+k_cipher > 'z')
                    {
                        printf("%c", user_string[i]+k_cipher-alphabet_length);
                    }
                    // Otherwise, print
                    else
                    {
                        printf("%c", user_string[i]+k_cipher);
                    }
                    
                }
                else
                {
                    // Print non alpha characters
                    printf("%c", user_string[i]);
                }
            }
            // Print new line
            printf("\n");
            return 0;
        }
    }
}