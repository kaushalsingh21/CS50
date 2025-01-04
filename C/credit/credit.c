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

    int sum_even = credit_chksum(credit, 10, 1);
    int sum_odd = credit_chksum(credit, 1, 0);
    int chksum_value = sum_even + sum_odd;

    printf("Checksum value is %d \n", chksum_value);

    if ( chksum_value == 20 && len ==15 && (initial_digits == 34 || initial_digits == 37) )
    {
        printf("American Express\n");
    }
    else if ( chksum_value == 20 && len == 16 &&  ( initial_digits >= 51 && initial_digits <= 55 ) )
    {
        printf("MasterCard\n");
    }
    else if ( chksum_value == 20 && ( len == 13 || len == 16 ) && ( initial_digits/10 == 4 ) )
    {
        printf("Visa\n");
    }
    else
    {
        printf("INVALID\n");
    }
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