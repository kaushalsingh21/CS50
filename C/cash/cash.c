#include <stdio.h>

// int change (int rem, int denomination, int tot);
int main(void)
{
    int remainder;
    int total = 0;
    
    do
    {   
        printf("Change owed: ");
        scanf("%d", &remainder);
    } while (remainder <= 0);

    int coins = remainder/25;
    if (coins > 0)
    {
        total = total + coins;
        remainder = remainder%25;
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

// int change (int rem, int denomination, int tot)
// {
//     int coins = rem/denomination;
//     if (coins > 0)
//     {
//         tot = tot + coins;
//         rem = rem%denomination;
//     }
// }