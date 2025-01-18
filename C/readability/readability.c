#include <stdio.h>
#include <string.h>


int main(void){
    printf("Text:");
    char text[2000];
    fgets(text, sizeof(text), stdin);
    printf("%s", text);
    printf("total number of letters are: %ld\n", strlen(text));

    int letter_count = 0;
    int word_count = 0;

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
    }

    printf("Total number of letter are %d and total number of words are %d\n", letter_count, word_count);
    
}   