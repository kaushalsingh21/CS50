#include <stdio.h>

int main(void)
{
    int cash;
    int total = 0;
    
    do
    {   
        printf("Change owed: ");
        scanf("%d", &cash);
    } while (cash <= 0);

    int remainder = cash;
    int coins = cash/25;
    if (coins > 0)
    {
        total = total + coins;
        remainder = cash%25;
    }

    coins = remainder/10;
    if (coins > 0)
    {
        total = total + coins;
        remainder = remainder%10;
    }

    coins = remainder/5;
    if (coins > 0)
    {
        total = total + coins;
        remainder = remainder%5;
    }

    coins = remainder/1;
    if (coins > 0)
    {
        total = total + coins;
    }

    printf("%d\n", total);
    
}

// int change (int rem, int denomination)
// {

// }