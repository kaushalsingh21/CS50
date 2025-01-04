#include <stdio.h>
#include <math.h>

int credit_chksum(long h1, int n, int even_flag);
int length(long digit);

int main(void)
{
    long credit;
    printf("Number:");
    scanf("%ld", &credit);
    int len = length(credit);
    int initial_digits = (int)(credit/((long)pow(10, length(credit)-2)));
    
    printf("length of digits is %d\n", len);
    printf("starting 2 digits are: %d\n", initial_digits);

    int sum_even = credit_chksum(credit, 10, 1);
    int sum_odd = credit_chksum(credit, 1, 0);
    int chksum_value = sum_even + sum_odd;

    printf("Checksum value is %d \n", chksum_value);
    
}

int credit_chksum(long h1, int n, int even_flag)
{
    int sum=0;
    for (long i = n; i < pow(10, 16); i*=100)
    {
        long rem = h1%(i*10);
        int num = rem/i;
        if (even_flag == 1)
        {
            num*=2;
            if (num/10>0)
            {
                int first = num/10;
                int second = num%10;

                num = first + second;
            }
            sum = sum + num;
        }
        else
        {
            sum = sum + num;
        }
    }

    return sum;    
}

int length(long digit)
{
    int len =0;
    if (digit == 0 )
    {
        len =1;
    }
    else
    {
        for (long dec=1; digit/dec > 0; dec*=10)
        {
        len++ ;
        }
    }

    return len ;
}