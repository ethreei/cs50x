#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int t;
    do 
    {
        printf("Enter half-pyramid's height: \n");
        t = GetInt();
    }
    while (t < 0 || t > 23);
    
    for (int i = 2; i < (t + 2); i++)
    {
        for (int j = (t + 1); j > i; j--)
        {
            printf(" ");
        }
        for (int j = 0; j < (i); j++)
        {
            printf("#");
        }
        printf("\n");
    }
}