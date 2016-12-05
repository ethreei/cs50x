#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float f_change;
    do
    {
        printf("How much change is owed? \n");
        f_change = GetFloat();
    }
    while (f_change < 0);
    
    int i_change;
    i_change = round(f_change * 100);
    
    int coins_used;
    coins_used = 0;
    int q;
    int d;
    int n;
    int p;
    q = 0;
    d = 0;
    n = 0;
    p = 0;
    
    // printf("%i, %f \n", i_change, f_change);
    
    while (i_change >= 25)
    {
        i_change = i_change - 25;
        coins_used += 1;
        q += 1;
    }
    while (i_change >= 10)
    {
        i_change = i_change - 10;
        coins_used += 1;
        d += 1;
    }
    while (i_change >= 5)
    {
        i_change = i_change - 5;
        coins_used += 1;
        n += 1;
    }
    while (i_change >= 1)
    {
        i_change = i_change - 1;
        coins_used += 1;
        p += 1;
    }
    // printf("%i, %i, %i, %i \n", q, d, n, p);
    printf("%i\n", coins_used);
}