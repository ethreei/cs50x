#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Please enter your shower duration in minutes: \n");
    int t = GetInt();
    printf("bottles: %i \n", t * 12);
}