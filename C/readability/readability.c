#include <stdio.h>
#include <string.h>


int main(void){
    printf("Text:");
    char text[2000];
    fgets(text, sizeof(text), stdin);

    int letter_count = 0;
    int word_count = 0;
    int sen_count =0;

    int lenght = strlen(text);
    printf("total length is %d and last element is %c\n", lenght, text[lenght]);

    for (int i = 0, len = strlen(text); i < len; i++)
    {
        if ( ( text[i] >= 'a' && text[i] <= 'z' ) || ( text[i] >= 'A' && text[i] <= 'Z'  ) )
        {
            letter_count++;
        }

        if ( ( text[i] == ' ' || text[i] == '.' ) && text[i-1] != '.' )
        {
            word_count++;
        }

        if ( text[i] == '.' || text[i] == '?' || text[i] == '!' )
        {
            sen_count++;
        }
    }
    
    double L = (letter_count/(double)word_count)*100;
    double S = (sen_count/(double)word_count)*100;

    int index = 0.0588 * L - 0.296 * S - 15.8;

    printf("L is %f and S is %f\n", L, S);

    printf("index is %d\n", index);

    printf("Total number of letter are %d and total number of words are %d and total number of sentence are %d\n", letter_count, word_count, sen_count);
    
}   