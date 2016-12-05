// Created by David Tran
// For CS50X

// Libaries
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define alphabet_length 26

// Function declarations
// char * convert(string any_string);

// Main Function
int main(int argc, string argv[])
{
    // Check arguement 1 for valid data
    if (argc != 2)
    {
        printf("1 \n");
        return 1;
    }
    else
    {
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
           if (!isalpha(argv[1][i])) 
           {
                printf("1 \n");
                return 1;
           }
        }
        
        string test = argv[1];
        int strlen_arg = strlen(test);
        
        // Prompt user for string
        string user_string = GetString();
        int strlen_user_string = strlen(user_string);
        // Create an array same length as string
        int ascii_array[strlen_user_string];
        
        
        // Loop through promtped string
        for (int i = 0, n = 0; i < strlen_user_string; i++, n++)
        {
            // Displace each character by looped array
            
            // Check if in alphabet
            if (isalpha(user_string[i]))
            {
                
                // Store each character to integer value
                if (isupper(test[n % strlen_arg]))
                {
                    ascii_array[i] = test[n % strlen_arg] - 'A';
                }
                else
                {
                    ascii_array[i] = test[n % strlen_arg] - 'a';
                }
                
                // Check if uppercase and wrap from Z -> A
                if (isupper(user_string[i]) && user_string[i]+ascii_array[i] > 'Z')
                {
                    printf("%c", user_string[i]+ascii_array[i]-alphabet_length);
                }
                
                // Check if lowercase and wrap from z -> a
                else if (islower(user_string[i]) && user_string[i]+ascii_array[i] > 'z')
                {
                    printf("%c", user_string[i]+ascii_array[i]-alphabet_length);
                }
                // Otherwise, print
                else
                {
                    printf("%c", user_string[i]+ascii_array[i]);
                }
                
            }
            else
            {
                // Print non alpha characters
                printf("%c", user_string[i]);
                n--;
            }
        }
        // Print new line
        printf("\n");
        return 0;
    }
}

