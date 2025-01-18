#include<stdio.h>
#include<string.h>

int points[] = { 1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int score(char input[50], char alphabets[26] );
int main(void)
{
    char c[26];
    c[0]='a';

    for( int i = 1; i <26; i++)
    {
        c[i] = c[i-1] + 1;
    }

    char input1[50];
    char input2[50];

    printf("Player 1: ");
    scanf("%s", input1);

    printf("Player 2: ");
    scanf("%s", input2);

    int sum1 = score( input1, c);
    int sum2 = score( input2, c);

    if( sum1 > sum2 )
    {
        printf("Player 1 wins!\n");
    }
    else if( sum1 < sum2 )
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

int score(char input[50], char alphabets[26] )
{
    int sum = 0;
    for( int j = 0; j < strlen(input); j++ )
    {
        for ( int k = 0; k < 26; k++ )
        {
            if( input[j] == alphabets[k] )
            {
                sum = sum + points[k];
            }
        }
    }

    return sum;

}