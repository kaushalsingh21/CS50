#include <stdio.h>
#include <math.h>

int main(void)
{
    long credit;
    printf("Number:");
    scanf("%ld", &credit);

    int h1 = credit/(int)100000000;
    int h2 = credit%(int)100000000;

    printf("part 1 is %d and part 2 is %d\n", h1, h2);

    int sum = 0;

    for (long i = 10; i < 100000000; i*=100)
    {
        int rem = h1%(i*10);
        int num = rem/i;
        sum = sum + (num*2);
        printf("Even digit is: %d\n", num);
        int rem1 = h2%(i*10);
        int num1 = rem1/i;
        printf("Even digit is: %d\n", num1);
        sum = sum + (num1*2);
    }

    for (long i = 1; i < 100000000; i*=100)
    {
        int rem = h1%(i*10);
        int num = rem/i;
        sum = sum + (num*2);
        printf("Odd digit is: %d\n", num);
        int rem1 = h2%(i*10);
        int num1 = rem1/i;
        printf("Odd digit is: %d\n", num1);
        sum = sum + (num1*2);
    }

    printf("Sum of evens is %d \n", sum);
    
}
