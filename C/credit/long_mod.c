#include <stdio.h>

int main(void)
{
    long h1 = 1234567812345678;
    long i = 100000000000000;

    long result = h1%i;

    printf("the value of mod is %ld\n", result);
}